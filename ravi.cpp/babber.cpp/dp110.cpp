//*****************************************************
//Q-1 : 0 1 Knapsack
//by recursion
#include <bits/stdc++.h> 
int solve(vector<int> &weight, vector<int> &value, int index, int capacity){
    //base case (hare we cover array of weight from L to R)
	if(index == 0){
		if(weight[0] <= capacity)
		   return value[0];
		else
		    return 0;
	}

	int include = 0;
	
	if(weight[index] <= capacity)
		include = value[index] + solve(weight, value, index-1, capacity-weight[index]);

	int exclude = 0 + solve(weight, value, index-1, capacity);


	int ans = max(include, exclude);
	return ans;
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	return solve(weight, value, n-1, maxWeight);
}


//by recurion + memoisation
#include <bits/stdc++.h> 
int solve(vector<int> &weight, vector<int> &value, int index, int capacity,
    vector<vector<int>>&dp){
    //base case (hare we cover array of weight from L to R)
	if(index == 0){
		if(weight[0] <= capacity)
		   return value[0];
		else
		    return 0;
	}

	//step-3
	if(dp[index][capacity] != -1){
		return dp[index][capacity];
	}

	int include = 0;
	if(weight[index] <= capacity)
		include = value[index] + solve(weight, value, index-1, capacity-weight[index], dp);

	int exclude = 0 + solve(weight, value, index-1, capacity, dp);


    //step-2
	dp[index][capacity] = max(include, exclude);
	return dp[index][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	//step-1
	vector<vector<int>>dp(n, vector<int>(maxWeight+1, -1));
	return solve(weight, value, n-1, maxWeight, dp);
}