//*****************************************************
//Q-1 :Maximum sum of non-adjacent elements

//by recurion
#include <bits/stdc++.h>
int solve(vector<int> &nums, int n){
    //base case
    if(n<0){
        return 0;
    }

    if(n==0){
        return nums[0];
    }

    int enclu = solve(nums, n-2) + nums[n];
    int exclu = solve(nums, n-1) + 0;

    int ans = max(enclu, exclu);
    return ans;
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    //here we traverse array from left to right
    int ans = solve(nums, n-1);
    return ans;
}

//by recursion + memoisation
#include <bits/stdc++.h>
int solve(vector<int> &nums, int n, vector<int> &dp){
    //base case
    if(n<0){
        return 0;
    }

    if(n==0){
        return nums[0];
    }

    //step-3
    if(dp[n] != -1){
        return dp[n];
    }

    int enclu = solve(nums, n-2, dp) + nums[n];
    int exclu = solve(nums, n-1, dp) + 0;

    //step-2
    dp[n] = max(enclu, exclu);
    return dp[n];
}
int maximumNonAdjacentSum(vector<int> &nums){
    int n = nums.size();
    //step-1
    vector<int> dp(n+1, -1);

    //here we traverse array from left to right
    int ans = solve(nums, n-1, dp);
    return ans;
}


//By tabulation
#include <bits/stdc++.h>
int solve(vector<int> &nums){
    //step-1
    int n = nums.size();
    vector<int> dp(n, 0);

    //step-2
    dp[0] = nums[0];

    //step-3
    for (int i = 1; i < n; i++) {
      int enclu = dp[i - 2] + nums[i];
      int exclu = dp[i - 1] + 0;
      dp[i] = max(enclu, exclu);
    }
    return dp[n-1];
}
int maximumNonAdjacentSum(vector<int> &nums){
    return solve(nums);
}


//By space optimisation
#include <bits/stdc++.h>
int solve(vector<int> &nums){
    //step-1
    int n = nums.size();
    int prev2 = 0;
    int prev1 = nums[0];

    //step-3
    for (int i = 1; i < n; i++) {
      int enclu = prev2 + nums[i];
      int exclu = prev1 + 0;
      int curr = max(enclu, exclu);

      prev2 = prev1;
      prev1 = curr;
    }
    return prev1;
}
int maximumNonAdjacentSum(vector<int> &nums){

    return solve(nums);
}