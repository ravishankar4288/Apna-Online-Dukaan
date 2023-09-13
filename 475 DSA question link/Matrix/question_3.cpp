//*****************************************************
//Q-1 : Rotate matrix by 90 degrees (clock wise)
#include <bits/stdc++.h>
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){           
               swap(matrix[i][j], matrix[j][i]);
            }    
        }

        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
 
    }
};

//Q-2 : Rotate matrix by 90 degrees (anti-clock wise)
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here
         for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){           
               swap(matrix[i][j], matrix[j][i]);
            }    
        }

        for(int i=0; i<n/2; i++){
           for(int j=0; j<n; j++){
               swap(matrix[i][j], matrix[n-i-1][j]);
           }
        }
    } 
};