//*****************************************************
//Q-1 : Print Like A Wave
#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector<int> ans;
    for(int j=0; j<mCols; j++){
        if(j%2==0){
            //here print top to bottom
            for(int i=0; i<nRows; i++){
                int a = arr[i][j];
                ans.push_back(a);
            }
        }
        else{
            //print bottom to top
            for(int i=nRows-1; i>=0; i--){
                int b = arr[i][j];
                ans.push_back(b);
            }
        }    
    }
    return ans;
}