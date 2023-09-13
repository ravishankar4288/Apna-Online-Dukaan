//*****************************************************
//Q-1 :  Median in a row-wise sorted Matrix
#include <bits/stdc++.h>
class Solution{   
public:
//Approach-1(brute force)
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        int n = R*C;
        vector<int> ans;
        
        for(int i=0; i<R; i++){
            for(int j=0; j<C; j++){
                int a = matrix[i][j];
                ans.push_back(a);
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans[n/2];
        
        
    }
};