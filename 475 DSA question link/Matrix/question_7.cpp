//*****************************************************
//Q-1 : Sorted matrix
#include <bits/stdc++.h> 
class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> ans;
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                int a = Mat[i][j];
                ans.push_back(a);
            }
        }
        
        sort(ans.begin(), ans.end());
        int k=0;
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                Mat[i][j] = ans[k++];
            }
        }
        
        return Mat;
        
    }
};