//*****************************************************
//Q-1 :   best time to buy and sell stock 4
// By space optimisation && using ietration  (in place 2 put put int k only)
#include <bits/stdc++.h>
class Solution {
public:
    int solve(vector<int>& prices, int k){

    int n = prices.size();
    vector<vector<int>> curr(2, vector<int>(k+1, 0));
    vector<vector<int>> next(2, vector<int>(k+1, 0));

    for(int index=n-1; index>=0; index--){
        for(int buy=0; buy<=1; buy++){
            for(int limit=1; limit<=k; limit++){
                int profit = 0;
    
                if(buy){
                    int buyKaro = -prices[index] + next[0][limit];
                    int skipKaro = 0 + next[1][limit];
                    profit = max(buyKaro, skipKaro);
                }
                else{
                    int sellKaro = prices[index] + next[1][limit -1];
                    int skipKaro = 0 + next[0][limit];
                    profit = max(sellKaro, skipKaro);       
                }
                curr[buy][limit] = profit;
            }
            next = curr;
        }
    }
    return next[1][k];
    }

    int maxProfit(int k, vector<int>& prices) {
        return solve(prices, k);
        
    }
};



//*********************************using  operation method*********************************
//By recurion
class Solution {
public:
    int solve(int index, int operation, int k, vector<int>& prices){
        //base case
        if(index == prices.size())
           return 0;

        if(operation == 2*k ) 
           return 0;

        int profit = 0;   
        
        if(operation%2 == 0){
            //it means buy is allowed
            int buyKaro = -prices[index] + solve(index+1, operation+1, k, prices);
            int skipKaro = 0 + solve(index+1, operation, k, prices);
            profit = max(buyKaro, skipKaro);
        }
        else{
            //it means sell is allowed
            int sellKaro = prices[index] + solve(index+1, operation+1, k, prices);
            int skipKaro = 0 + solve(index+1, operation, k, prices);
            profit = max(sellKaro, skipKaro); 
        }
        return profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        return solve(0, 0, k, prices);
        
    }
};


//recurion + memoisation
class Solution {
public:
    int solve(int index, int operation, int k, vector<int>& prices, vector<vector<int>> &dp){
        //base case
        if(index == prices.size())
           return 0;

        if(operation == 2*k ) 
           return 0;
        
        if(dp[index][operation] != -1)
            return dp[index][operation];
        int profit = 0;   
        
        if(operation%2 == 0){
            //it means buy is allowed
            int buyKaro = -prices[index] + solve(index+1, operation+1, k, prices, dp);
            int skipKaro = 0 + solve(index+1, operation, k, prices, dp);
            profit = max(buyKaro, skipKaro);
        }
        else{
            //it means sell is allowed
            int sellKaro = prices[index] + solve(index+1, operation+1, k, prices, dp);
            int skipKaro = 0 + solve(index+1, operation, k, prices, dp);
            profit = max(sellKaro, skipKaro); 
        }
        return dp[index][operation] = profit;
    }
    
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int>(2*k, -1));
        return solve(0, 0, k, prices, dp);
        
    }
};


//tabulation
class Solution {
public:
    int solve(int k, vector<int>& prices){

        int n = prices.size();
        vector<vector<int>> dp(n+1, vector<int>(2*k+1, 0));

        for(int index=n-1; index>=0; index--){
            for(int operation= 0; operation<2*k; operation++){
                int profit = 0;   
        
                if(operation%2 == 0){
                    //it means buy is allowed
                    int buyKaro = -prices[index] + dp[index+1][operation+1];
                    int skipKaro = 0 + dp[index+1][operation];
                    profit = max(buyKaro, skipKaro);
                }
                else{
                    //it means sell is allowed
                    int sellKaro = prices[index] + dp[index+1][operation+1];
                    int skipKaro = 0 + dp[index+1][operation];
                    profit = max(sellKaro, skipKaro); 
                }
                dp[index][operation] = profit;
                }
        }
        return dp[0][0];
    }
    
    int maxProfit(int k, vector<int>& prices) {
        return solve(k, prices);
        
    }
};



//space optimistaion
class Solution {
public:
    int solve(int k, vector<int>& prices){

        int n = prices.size();
        vector<int> curr(2*k+1, 0);
        vector<int> next(2*k+1, 0);


        for(int index=n-1; index>=0; index--){
            for(int operation= 0; operation<2*k; operation++){
                int profit = 0;   
        
                if(operation%2 == 0){
                    //it means buy is allowed
                    int buyKaro = -prices[index] + next[operation+1];
                    int skipKaro = 0 + next[operation];
                    profit = max(buyKaro, skipKaro);
                }
                else{
                    //it means sell is allowed
                    int sellKaro = prices[index] + next[operation+1];
                    int skipKaro = 0 + next[operation];
                    profit = max(sellKaro, skipKaro); 
                }
                curr[operation] = profit;
            }
            next = curr;
        }
        return next[0];
    }
    
    int maxProfit(int k, vector<int>& prices) {
        return solve(k, prices);
        
    }
};