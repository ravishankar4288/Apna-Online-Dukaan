//*****************************************************
//Q-1 : Spiral Matrix
#include <bits/stdc++.h> 
vector<int> spiralPathMatrix(vector<vector<int>> matrix, int n, int m) 
{
    
     //size of row and col
        // int row = matrix.size();
        // int col = matrix[0].size();

        int total = n*m;
        int count = 0;
        vector<int> ans;

        int startingRow = 0;
        int endingRow = n-1;
        int startingCol = 0;
        int endingCol = m-1;

        while(count<total){
            //print starting row
            for(int index=startingCol; count<total && index<=endingCol; index++){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //print ending col
            for(int index=startingRow; count<total && index<=endingRow; index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;


            //print ending row
            for(int index=endingCol; count<total && index>=startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;


            //print starting col
            for(int index=endingRow; count<total && index>=startingRow; index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
}