//*****************************************************
//Q-1 : Minimum Sideway Jumps
// By recursion

#include <bits/stdc++.h>
class Solution {
public:
    int solve(vector<int>& satisfaction, int index, int time){
        //base case
        if(index == satisfaction.size()){
            return 0;
        }

        int include = satisfaction[index]*(time+1) + solve(satisfaction, index+1, time+1);
        int exclude = 0 + solve(satisfaction, index+1, time);

        return max(include, exclude);
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        //sort the array of satisfaction 
        sort(satisfaction.begin(), satisfaction.end());
        return solve(satisfaction, 0, 0);
        
    }
};



//recursion + memoisation
class Solution {
public:
    int solve(vector<int>& satisfaction, int index, int time, vector<vector<int>> &dp){
        //base case
        if(index == satisfaction.size()){
            return 0;
        }

        //step-3
        if(dp[index][time] != -1){
            return dp[index][time];
        }

        int include = satisfaction[index]*(time+1) + solve(satisfaction, index+1, time+1, dp);
        int exclude = 0 + solve(satisfaction, index+1, time, dp);

        //step-2
        dp[index][time] = max(include, exclude);
        return dp[index][time];
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        //sort the array of satisfaction 
        sort(satisfaction.begin(), satisfaction.end());

        //step-1
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, -1));
        return solve(satisfaction, 0, 0, dp);
        
    }
};


//tabulation
class Solution {
public:
    int solve(vector<int>& satisfaction){
        //base case
        int n = satisfaction.size();
        vector<vector<int>> dp(n+1, vector<int> (n+1, 0));

        for(int index=n-1; index>=0; index--){
            for(int time=index; time>=0; time--){
                int include = satisfaction[index]*(time+1) + dp[index+1][time+1];
                int exclude = 0 + dp[index+1][time];

                dp[index][time] = max(include, exclude);
            }
        }
        return dp[0][0];
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        //sort the array of satisfaction 
        sort(satisfaction.begin(), satisfaction.end());
        return solve(satisfaction);
        
    }
};

//space optimisation
class Solution {
public:
    int solve(vector<int>& satisfaction){
        //base case
        int n = satisfaction.size();
        vector<int> curr(n+1, 0);
        vector<int> next(n+1, 0);

        for(int index=n-1; index>=0; index--){
            for(int time=index; time>=0; time--){
                int include = satisfaction[index]*(time+1) + next[time+1];
                int exclude = 0 + next[time];

                curr[time] = max(include, exclude);
            }
            next = curr;
        }
        return next[0];
    }

    int maxSatisfaction(vector<int>& satisfaction) {
        //sort the array of satisfaction 
        sort(satisfaction.begin(), satisfaction.end());
        return solve(satisfaction);
        
    }
};
