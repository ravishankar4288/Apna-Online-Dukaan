
//by recursion
#include <bits/stdc++.h> 
int solve(vector<int> &num, int x){
    //base case 
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }

    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++){
        int ans = solve(num, x-num[i]);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    return mini;
}
int minimumElements(vector<int> &num, int x)
{
    int ans = solve(num, x);
    if(ans == INT_MAX){
        return -1;
    }
    else{
        return ans;
    }
}



// by recursion + memoisation
#include <bits/stdc++.h> 
int solve(vector<int> &num, int x, vector<int> &dp){
    //base case 
    if(x==0){
        return 0;
    }
    if(x<0){
        return INT_MAX;
    }

    //step-3
    if(dp[x] != -1){
        return dp[x];
    }

    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++){
        int ans = solve(num, x-num[i], dp);
        if(ans != INT_MAX){
            mini = min(mini, 1+ans);
        }
    }
    //step-2
    dp[x] = mini;
    return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
    //step-1
    vector<int> dp(x+1, -1);
    int ans = solve(num, x, dp);
    if(ans == INT_MAX){
        return -1;
    }
    else
       return ans;
}



// By tabulation
#include <bits/stdc++.h> 
int solve(vector<int> &num, int x){
    //step-1
    vector<int> dp(x+1, INT_MAX);

    //step-2
    dp[0] = 0;

    //step-3
    for(int i=1; i<=x; i++){
        // I am trying to solve every amount from 1 to x
        for (int j = 0; j < num.size(); j++) {
          if (i - num[j] >= 0 && dp[i - num[j]] != INT_MAX)
            dp[i] = min(dp[i], 1 + dp[i - num[j]]);
        }
    }

    if(dp[x] == INT_MAX){
        return -1;
    }
    else
        return dp[x];
}
int minimumElements(vector<int> &num, int x)
{
  return solve(num, x);
}