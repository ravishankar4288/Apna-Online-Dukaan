//*****************************************************
//Q-1 : Ninja's Trip
//by recursion

#include <bits/stdc++.h> 
int solve(int n, vector<int> &days, vector<int> &cost, int index){
    //base case
    if(index >=n){
        return 0;
    }

    //for 1 day pass
    int option1 =cost[0] + solve(n, days, cost, index+1);

    int i;
    //for 7 days pass
    for(i=index; i<n && days[i]<days[index] +7 ; i++);

    int option2 = cost[1] + solve(n, days, cost, i);

    //for 30 days pass
    for(i=index; i<n && days[i]<days[index] +30 ; i++);

    int option3 = cost[2] + solve(n, days, cost, i);

    return min(option1, min(option2, option3));

}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    return solve(n, days, cost, 0);
}




//recurion + memoisation
int solve(int n, vector<int> &days, vector<int> &cost, int index, vector<int>&dp){
    //base case
    if(index >=n){
        return 0;
    }

    //step-3
    if(dp[index] != -1)
       return dp[index];

    //for 1 day pass
    int option1 =cost[0] + solve(n, days, cost, index+1, dp);

    int i;
    //for 7 days pass
    for(i=index; i<n && days[i]<days[index] +7 ; i++);

    int option2 = cost[1] + solve(n, days, cost, i, dp);

    //for 30 days pass
    for(i=index; i<n && days[i]<days[index] +30 ; i++);

    int option3 = cost[2] + solve(n, days, cost, i, dp);

    //step-2
    dp[index] = min(option1, min(option2, option3));
    return dp[index];
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    //step-1
    vector<int> dp(n+1, -1);
    return solve(n, days, cost, 0, dp);
}


// by tabulation
int solve(int n, vector<int> &days, vector<int> &cost){
    //step-1
    vector<int> dp(n+1,INT_MAX);
    
    //step-2
    dp[n] = 0;

    //step-3
    for(int k=n-1; k>=0; k--){
        //for 1 day pass
        int option1 =cost[0] + dp[k+1];

        int i;
        //for 7 days pass
        for(i=k; i<n && days[i]<days[k] +7 ; i++);

        int option2 = cost[1] + dp[i];

        //for 30 days pass
        for(i=k; i<n && days[i]<days[k] +30 ; i++);

        int option3 = cost[2] + dp[i];

        dp[k]=min(option1, min(option2, option3));
    }
    return dp[0];
}

int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    return solve(n, days, cost);
}