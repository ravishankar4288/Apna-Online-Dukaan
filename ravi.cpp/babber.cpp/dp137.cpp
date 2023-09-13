//*****************************************************
//Q-1 :   Edit distance
//By recursion
#include <bits/stdc++.h>
class Solution {
public:
    int solve(string &a, string &b, int i, int j){
        //base case
        if(i == a.length())
           return b.length()-j;

        if(j == b.length())   
           return a.length() - i;

        int ans = 0;

        if(a[i] == b[j])   {
            return solve(a, b, i+1, j+1);
        }
        else{
            //insret
            int insretAns = 1 + solve(a, b, i, j+1);

            //delete
            int deleteAns = 1 + solve(a, b, i+1, j);

            //replace
            int replaceAns = 1 + solve(a, b, i+1, j+1);

            ans = min(insretAns, min(deleteAns, replaceAns));
        }
        return ans;
    }
    int minDistance(string word1, string word2) {
        return solve(word1, word2, 0, 0);
        
    }
};


//recursion + memoisation
class Solution {
public:
    int solve(string &a, string &b, int i, int j, vector<vector<int>>& dp){
        //base case
        if(i == a.length())
           return b.length()-j;

        if(j == b.length())   
           return a.length() - i;
        
        if(dp[i][j] != -1)
           return dp[i][j];

        int ans = 0;

        if(a[i] == b[j])   {
            return solve(a, b, i+1, j+1, dp);
        }
        else{
            //insret
            int insretAns = 1 + solve(a, b, i, j+1, dp);

            //delete
            int deleteAns = 1 + solve(a, b, i+1, j, dp);

            //replace
            int replaceAns = 1 + solve(a, b, i+1, j+1, dp);

            ans = min(insretAns, min(deleteAns, replaceAns));
        }
        return dp[i][j] = ans;
    }
    int minDistance(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(word1, word2, 0, 0, dp);
        
    }
};


//tabulation
class Solution {
public:
    int solve(string &a, string &b){

        int n = a.length();
        int m = b.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

        for(int j=0; j<m; j++){
            dp[n][j] = m-j;
        }

        for(int i=0; i<n; i++){
            dp[i][m] = n-i;
        }

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
            int ans = 0;

            if(a[i] == b[j])   {
                ans = dp[i+1][j+1];
            }
            else{
                //insret
                int insretAns = 1 + dp[i][j+1];

                //delete
                int deleteAns = 1 + dp[i+1][j];

                //replace
                int replaceAns = 1 + dp[i+1][j+1];

                ans = min(insretAns, min(deleteAns, replaceAns));
            }
            dp[i][j] = ans;            
            }
        }
        return dp[0][0];
    }
    int minDistance(string word1, string word2) {

        return solve(word1, word2);
        
    }
};