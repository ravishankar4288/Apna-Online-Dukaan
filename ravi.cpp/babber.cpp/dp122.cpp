//*****************************************************
//Q-1 :  number of dice rolls with target sum
// By recursion

#include <bits/stdc++.h>
class Solution {
  public:
    long long solve(int face, int dice, int target){
        //base case
        if(target < 0)
           return 0;
          
        if(target == 0 && dice != 0)
           return 0;
           
        if(target !=0 && dice == 0)
           return 0;
           
        if(target ==0 && dice ==0)
           return 1;
           
        int ans = 0;
        for(int i=1; i<=face; i++){
            ans = ans + solve(face, dice-1, target-i);
        }       
        return ans;
    }
  
    long long noOfWays(int M , int N , int X) {
        return solve(M, N, X);
    }
};



// recursion + memoisation
class Solution {
  public:
    long long solve( int dice, int face, int target, vector<vector<long long>> &dp){
        //base case
        if(target < 0)
           return 0;
          
        if(target == 0 && dice != 0)
           return 0;
           
        if(target !=0 && dice == 0)
           return 0;
           
        if(target ==0 && dice ==0)
           return 1;
        
        if(dp[dice][target] != -1)  
           return dp[dice][target];
           
        long long ans = 0;
        for(int i=1; i<=face; i++){
            ans = ans + solve(dice-1, face, target-i, dp);
        }
        
        dp[dice][target] = ans;
        return dp[dice][target];
    }
  
  
    long long noOfWays(int M , int N , int X) {
        vector<vector<long long>> dp(N+1, vector<long long>(X+1, -1));
        return solve(N, M,  X, dp);
    }
};



//space optimisation
class Solution {
  public:
    long long solve( int d, int f, int t){
        
        vector<long long> prev(t+1, 0);
        vector<long long> curr(t+1, 0);
        prev[0] = 1;
        
        for(int dice=1; dice<=d; dice++){
            for(int target=1; target<=t; target++){
                long long ans = 0;
                for(int i=1; i<=f; i++){
                    if(target-i>=0)
                       ans = ans + prev[target-i];
                }
                curr[target] = ans;
            }
            prev = curr;
        }
        return curr[t];
    }
  
    long long noOfWays(int M , int N , int X) {    
        return solve(N, M,  X);
    }
};


