//*****************************************************
//Q-1 : wildcard matching
//By recursion
#include <bits/stdc++.h>

class Solution {
public:
   bool solve(string& str, string& ptr, int i, int j){
       //base case
       if(i<0 && j<0)
          return true;

       if(i>=0 && j<0)
           return false;

       if(i<0 && j>=0){
           for(int k=0; k<=j; k++){
               if(ptr[k] != '*')
                 return false;
           }
           return true;
       }

       if(str[i] == ptr[j] || ptr[j] == '?'){
           return solve(str, ptr, i-1, j-1);
       }
       else if(ptr[j] == '*'){
           return (solve(str, ptr, i, j-1) || solve(str, ptr, i-1, j));
       }
       else{
           return false;
       }
   }

    bool isMatch(string s, string p) {
        return solve(s, p, s.length()-1, p.length()-1);
        
    }
};


//recursion + memoisation
class Solution {
public:
   bool solve(string& str, string& ptr, int i, int j, vector<vector<int>> &dp){
       //base case
       if(i<0 && j<0)
          return true;

       if(i>=0 && j<0)
           return false;

       if(i<0 && j>=0){
           for(int k=0; k<=j; k++){
               if(ptr[k] != '*')
                 return false;
           }
           return true;
       }

       if(dp[i][j] != -1){
           return dp[i][j];
       }

       if(str[i] == ptr[j] || ptr[j] == '?'){
           return dp[i][j] = solve(str, ptr, i-1, j-1, dp);
       }
       else if(ptr[j] == '*'){
           return dp[i][j] = (solve(str, ptr, i, j-1, dp) || solve(str, ptr, i-1, j, dp));
       }
       else{
           return false;
       }
   }

    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(s, p, s.length()-1, p.length()-1, dp);
        
    }
};

//tabulation
class Solution {
public:
   bool solve(string str, string ptr){

        int n = str.length();
        int m = ptr.length();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

        dp[0][0] = true;

        for(int j=1; j<=m; j++){
            bool flag = true;
             for(int k=1; k<=j; k++){
                 
               if(ptr[k-1] != '*'){
                 flag = false;
                 break;
               }
           }
           dp[0][j] = flag;
        }


        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){

               if(str[i-1] == ptr[j-1] || ptr[j-1] == '?'){
                   dp[i][j] = dp[i-1][j-1];
                }

                else if(ptr[j-1] == '*'){
                       dp[i][j] = (dp[i][j-1] || dp[i-1][j]);
                 }

                else{
                    dp[i][j] = false;
                }        
            }
        }
        return dp[n][m];
   }

    bool isMatch(string s, string p) {
        return solve(s, p);     
    }
};


//space optimisation
class Solution {
public:
   bool solve(string str, string ptr){

        int n = str.length();
        int m = ptr.length();
        vector<int> curr(m+1, 0);
        vector<int> prev(m+1, 0);

        prev[0] = true;

        for(int j=1; j<=m; j++){
            bool flag = true;
             for(int k=1; k<=j; k++){

               if(ptr[k-1] != '*'){
                 flag = false;
                 break;
               }
           }
           prev[j] = flag;
        }

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){

               if(str[i-1] == ptr[j-1] || ptr[j-1] == '?'){
                   curr[j] = prev[j-1];
                }

                else if(ptr[j-1] == '*'){
                       curr[j] = (curr[j-1] || prev[j]);
                 }

                else{
                    curr[j] = false;
                }        
            }
            prev = curr;
        }
        return prev[m];
   }

    bool isMatch(string s, string p) {
        return solve(s, p);
        
    }
};