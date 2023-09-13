//*****************************************************
//Q-1 : Get Minimum Squares
//by recursion
#include <bits/stdc++.h> 
class Solution{
	public:
	int solve (int n){
	    //base case
	    if(n==0){
	        return 0;
	    }
	int ans = n;    
	for(int i=1; i*i<=n; i++){
	    ans= min(ans, 1+solve(n-i*i));
	}
	return ans;
	}
	
	int MinSquares(int n)
	{
	    return solve(n);
	}
};



//By recursion + memoisation
class Solution{
	public:
	int solve (int n, vector<int> &dp){
	    //base case
	    if(n==0){
	        return 0;
	    }
	//step-3
	if(dp[n] != -1)
	  return dp[n];
	    
	int ans = n;    
	for(int i=1; i*i<=n; i++){
	    ans= min(ans, 1+solve(n-i*i, dp));
	}
	
	//step-2
	dp[n] = ans;
	return dp[n];
	}
	
	int MinSquares(int n)
	{
	    //step-1
	    vector<int> dp(n+1, -1);
	    return solve(n, dp);
	}
};



//by tabulation
class Solution{
	public:
	int solve (int n){
	    //step-1
	    vector<int> dp(n+1, INT_MAX);
	    
	//step-2 by base case
	dp[0] = 0;
	    
	//step-3
	for(int i=1; i<=n; i++){
	    for(int j=1; j*j<=n; j++){
	        if(i-j*j>=0)
	        dp[i] = min(dp[i], 1+dp[i-j*j]);
	    }
	}
	return dp[n];
	}
	
	int MinSquares(int n)
	{
	    return solve(n);
	}
};