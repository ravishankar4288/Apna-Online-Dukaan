//*****************************************************
//Q-1 :  Search a 2D Matrix(1)
#include <bits/stdc++.h>

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == target){
                   return true;
                   break;
                }
                
            }
        }
        return false;
    }
};


//Approach-2 (By binary serach)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = (row*col)-1;
        int mid = start + (end - start)/2;

        while(start <= end){
            int element = matrix[mid/col][mid%col];

            if( element== target ){
                return true;
            }
            else if( element > target  ){
                end = mid - 1;
            }
            else{
                start = mid + 1;              
            } 
            mid = start + (end - start)/2;
        }
        return false;
    }
};



//Q-2 : Search a 2D Matrix (2) ->in this question element is sorted by row as well as col
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col-1;

        while(rowIndex < row && colIndex >= 0){
            int element = matrix[rowIndex][colIndex];

            if(element == target){
                return true;
            }

            else if(element < target){
                rowIndex++;
            }
            else{  //element > target
                colIndex--;
            }
        }
        return false;      
    }
};
