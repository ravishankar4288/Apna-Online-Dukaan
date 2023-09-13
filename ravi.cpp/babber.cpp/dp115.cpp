//*****************************************************
//Q-1 : Largest square formed in a matrix
// By recursion
#include <bits/stdc++.h> 
class Solution{
public:
    int solve(vector<vector<int>>& mat, int i, int j, int &maxi){
        //base case
        if(i>= mat.size() || j>= mat[0].size()){
            return 0;
        }
        
        int right = solve(mat, i, j+1, maxi);
        int digonal = solve(mat, i+1, j+1, maxi);
        int down = solve(mat, i+1, j, maxi);
        
        if(mat[i][j] ==1 ){
            int ans = 1 + min(right, min(digonal, down));
            maxi = max(maxi, ans);
            return ans;
        }
        else{
            return 0;
        }
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        solve(mat, 0, 0, maxi);
        return maxi;
    }
};




// By recursion + memoisation
class Solution{
public:
    int solve(vector<vector<int>>& mat, int i, int j, int &maxi, vector<vector<int>> &dp){
        //base case
        if(i>= mat.size() || j>= mat[0].size()){
            return 0;
        }
        
        //step-3
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        int right = solve(mat, i, j+1, maxi, dp);
        int digonal = solve(mat, i+1, j+1, maxi, dp);
        int down = solve(mat, i+1, j, maxi, dp);
        
        if(mat[i][j] ==1 ){
            // step-2
            dp[i][j] = 1 + min(right, min(digonal, down));
            maxi = max(maxi, dp[i][j]);
            return dp[i][j];
        }
        else{
            return dp[i][j] = 0;
        }
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat){
        //step-1 
        vector<vector<int>> dp(n, vector<int>(m, -1));
        int maxi = 0;
        solve(mat, 0, 0, maxi, dp);
        return maxi;
    }
};



// By tabulation
class Solution{
public:
    int solve(vector<vector<int>>& mat, int &maxi){
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> dp(row+1, vector<int> (col+1, 0));
        
        for(int i=row-1 ; i>=0 ; i--){
            for(int j=col-1 ; j>=0; j--){
                int right = dp[i][j+1];
                int digonal = dp[i+1][j+1];
                int down = dp[i+1][j];
        
                if(mat[i][j] ==1 ){
                dp[i][j] = 1 + min(right, min(digonal, down));
                maxi = max(maxi, dp[i][j]);
        }
        else{
             dp[i][j] = 0;
        }
        
            }
        }
        return dp[0][0];
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        solve(mat, maxi);
        return maxi;
    }
};


// By space optimisation (s.c ->O(m))
class Solution{
public:
    int solve(vector<vector<int>>& mat, int &maxi){
        int row = mat.size();
        int col = mat[0].size();
        
        // row wise
        vector<int> curr(col+1, 0);
        vector<int> next(col+1, 0);
        
        for(int i=row-1 ; i>=0 ; i--){
            for(int j=col-1 ; j>=0; j--){
                int right = curr[j+1];
                int digonal = next[j+1];
                int down = next[j];
        
                if(mat[i][j] ==1 ){
                curr[j] = 1 + min(right, min(digonal, down));
                maxi = max(maxi, curr[j]);
        }
        else{
             curr[j] = 0;
        }
            }    
            next = curr;    
        }
        return curr[0];
    }
    
    int maxSquare(int n, int m, vector<vector<int>> mat){
        int maxi = 0;
        solve(mat, maxi);
        return maxi;
    }
};