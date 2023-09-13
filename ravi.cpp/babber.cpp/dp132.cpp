//*****************************************************
//Q-1 :   best time to buy and sell stock III
// By recursion
#include <bits/stdc++.h>
class Solution {
public:
    int solve(int index, int buy, vector<int>& prices, int limit){
    //base case
    if(index == prices.size()){
        return 0;
    }

    if(limit == 0){
        return 0;
    }

    int profit = 0;
    
    if(buy){
        int buyKaro = -prices[index] + solve(index+1, 0, prices, limit);
        int skipKaro = 0 + solve(index+1, 1, prices, limit);
        profit = max(buyKaro, skipKaro);
    }
    else{
        int sellKaro = prices[index] + solve(index+1, 1, prices, limit-1);
        int skipKaro = 0 + solve(index+1, 0, prices, limit);
        profit = max(sellKaro, skipKaro);       
    }
    return profit;
    }
    int maxProfit(vector<int>& prices) {
        return solve(0, 1, prices, 2);       
    }
};


//recurion + memoisation 
class Solution {
public:
    int solve(int index, int buy, vector<int>& prices, int limit, vector<vector<vector<int>>> &dp){
    //base case
    if(index == prices.size()){
        return 0;
    }

    if(limit == 0){
        return 0;
    }

    if(dp[index][buy][limit] != -1){
        return dp[index][buy][limit];
    }

    int profit = 0;
    
    if(buy){
        int buyKaro = -prices[index] + solve(index+1, 0, prices, limit, dp);
        int skipKaro = 0 + solve(index+1, 1, prices, limit, dp);
        profit = max(buyKaro, skipKaro);
    }
    else{
        int sellKaro = prices[index] + solve(index+1, 1, prices, limit-1, dp);
        int skipKaro = 0 + solve(index+1, 0, prices, limit, dp);
        profit = max(sellKaro, skipKaro);       
    }
    return dp[index][buy][limit] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        return solve(0, 1, prices, 2, dp);
        
    }
};


//tabulation
class Solution {
public:
    int solve(vector<int>& prices){

    int n = prices.size();
    vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, 0)));

    for(int index=n-1; index>=0; index--){
        for(int buy=0; buy<=1; buy++){
            for(int limit=1; limit<=2; limit++){
                int profit = 0;
    
                if(buy){
                    int buyKaro = -prices[index] + dp[index+1][0][limit];
                    int skipKaro = 0 + dp[index+1][1][limit];
                    profit = max(buyKaro, skipKaro);
                }
                else{
                    int sellKaro = prices[index] + dp[index+1][1][limit -1];
                    int skipKaro = 0 + dp[index+1][0][limit];
                    profit = max(sellKaro, skipKaro);       
                }
                dp[index][buy][limit] = profit;
            }
        }
    }
    return dp[0][1][2];
    }
    int maxProfit(vector<int>& prices) {

        return solve(prices);
        
    }
};


//space optimisation
class Solution {
public:
    int solve(vector<int>& prices){

    int n = prices.size();
    vector<vector<int>> curr(2, vector<int>(3, 0));
    vector<vector<int>> next(2, vector<int>(3, 0));

    for(int index=n-1; index>=0; index--){
        for(int buy=0; buy<=1; buy++){
            for(int limit=1; limit<=2; limit++){
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
    return next[1][2];
    }
    int maxProfit(vector<int>& prices) {

        return solve(prices);
        
    }
};