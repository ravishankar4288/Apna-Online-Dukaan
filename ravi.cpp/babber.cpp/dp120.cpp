//*****************************************************
//Q-1 : Maximum Height by Stacking Cuboids   
//using Longest Increasing Subsequence(LIS)

#include <bits/stdc++.h>
class Solution {
public:
    bool check(vector<int> base, vector<int> newBox){
        if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2]){
            return true;
        }
        else
            return false;
    }

    int solve(int n, vector<vector<int>>& a){
           
           vector<vector<int>> dp(n+1, vector<int>(n+1, -0));
           
           for(int curr=n-1; curr>=0; curr--){
               for(int prev=curr-1; prev>=-1; prev--){
                //include
                int take = 0;
                if(prev == -1 || check(a[curr] , a[prev])){
                    take = a[curr][2] +  dp[curr+1][curr+1];
                }
           
                //exclude
                int notTake = 0 + dp[curr+1][prev+1];
                dp[curr][prev+1] = max(take, notTake);  
               }
           }
           return dp[0][0];
           
       }

    int maxHeight(vector<vector<int>>& cuboids) {
        //step-1 : sort all cuboids on the basis of all dimension
        for(auto &a: cuboids){
            sort(a.begin(), a.end());
        }

        //step-2 : sort all cuboids on basis of w or l
        sort(cuboids.begin(), cuboids.end());

        //step-3 : use logic of LIS problem
        return solve(cuboids.size(), cuboids);   
    }
};