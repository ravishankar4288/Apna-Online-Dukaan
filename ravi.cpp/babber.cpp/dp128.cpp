//*****************************************************
//Q-1 :   Guess Number Higher or Lower II
// By recursion
#include <bits/stdc++.h>
class Solution {
public:
    int solve(int start, int n){
        //base case
        if(start>=n){
            return 0;
        }

        int mini = INT_MAX;

        for(int i=start; i<=n; i++){
            mini = min(mini, i+ max(solve(start, i-1), solve(i+1, n)));
        }
        return mini;

    }

    int getMoneyAmount(int n) {
        return solve(1, n);    
    }
};


//tabulation
class Solution {
public:
    int solve( int n){

        vector<vector<int>> dp(n+2, vector<int>(n+2, 0));

        for(int start=n; start>=1; start--){
            for(int end=start; end<=n; end++){
                if(start == end)
                  continue;

                else{
                    int mini = INT_MAX;

                   for(int i=start; i<=end; i++){
                       mini = min(mini, i+ max(dp[start][i-1], dp[i+1][end]));
                   }
                   dp[start][end] = mini;
                }  
            }
        }
        return dp[1][n];
    }

    int getMoneyAmount(int n) {
        return solve(n);    
    }
};
