//*****************************************************
//Q-1 :  Partition Equal Subset Sum
// By recursion

#include <bits/stdc++.h>
class Solution{
public:
    bool solve(int index, int n, int arr[], int target){
        //base case
        if(index >= n)
           return 0;
           
        if(target < 0)   
           return 0;
           
        if(target == 0)
           return 1;
           
        int include = solve(index+1, n, arr, target-arr[index]);
        int exclude = solve(index+1, n, arr, target-0);
        
        return include or exclude;
    }


    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i=0; i<N; i++){
            total = total + arr[i];
        }
        
        if(total & 1)
           return 0;
           
        int target = total/2;
        
        return (0, N, arr, target);
    }
};



//recurion + memeoisation
class Solution{
public:
    bool solve(int index, int n, int arr[], int target, vector<vector<int>> &dp){
        //base case
        if(index >= n)
           return 0;
           
        if(target < 0)   
           return 0;
           
        if(target == 0)
           return 1;
           
        //step-3
        if(dp[index][target] != -1)
           return dp[index][target];
           
        int include = solve(index+1, n, arr, target-arr[index], dp);
        int exclude = solve(index+1, n, arr, target-0, dp);
        
        //step-2
        return dp[index][target] = include or exclude;
    }


    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i=0; i<N; i++){
            total = total + arr[i];
        }
        
        if(total & 1)
           return 0;
           
        int target = total/2;
        
        //step-1
        vector<vector<int>> dp(N, vector<int>(target+1, -1));
        return solve(0, N, arr, target, dp);
    }
};


//tabulation
class Solution{
public:
    bool solve(int n, int arr[], int total){

        vector<vector<int>> dp(n+1, vector<int>(total/2+1, 0));   
        
        for(int i=0; i<= n; i++){
            dp[i][0] = 1;
        }
        
        for(int index=n-1; index>=0; index--){
            for(int target=0; target<= total/2; target++){
                
                bool include = 0;
                if(target-arr[index] >=0)
                   include = dp[index+1][target-arr[index]];
                   
                bool exclude = dp[index+1][target-0];
        
        
               dp[index][target] = include or exclude;
            }
        }
        return dp[0][total/2];
    }

    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i=0; i<N; i++){
            total = total + arr[i];
        }
        
        if(total & 1)
           return 0;
           
        int target = total/2;
        
        
        return solve( N, arr, total);
    }
};


//space optimisation
class Solution{
public:
    bool solve(int n, int arr[], int t){

        vector<int> curr(t+1, 0);
        vector<int> next(t+1, 0);
        
        curr[0]=1;
        next[0]=1;
        
        for(int index=n-1; index>=0; index--){
            for(int target=0; target<=t; target++){
                
                bool include = 0;
                if(target-arr[index] >=0)
                   include = next[target-arr[index]];
                   
                bool exclude = next[target-0];
        
               curr[target] = include or exclude;
            }
            next = curr;
        }
        return next[t];
    }


    int equalPartition(int N, int arr[])
    {
        int total = 0;
        for(int i=0; i<N; i++){
            total = total + arr[i];
        }
        
        if(total & 1)
           return 0;
           
        int target = total/2;
        
        
        return solve( N, arr, target);
    }
};

