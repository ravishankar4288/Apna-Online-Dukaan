//*****************************************************
//Q-1 :  Find the kth smallest element in the matrix.

//Approach-1 using max heap (T.C -> N^2)
#include <bits/stdc++.h> 
int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int> pq; // max heap
  
  for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
          pq.push(mat[i][j]);
          if(pq.size() > k){
              pq.pop();
          }
      }
  }
  
  return pq.top();
}


//Approach-2
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
         int n = matrix.size();
         int start = matrix[0][0];
         int end = matrix[n-1][n-1];
     
         while(start < end ){
         int mid = start + (end-start)/2;
         int count = 0;
         for(int i=0; i<n; i++){
             count = count + (upper_bound(matrix[i].begin(), matrix[i].end(), mid)-matrix[i].begin());
         }
         
         if(count < k){
             start = mid+1;
         }
         else{
             end = mid ;
         }

         }
        return start;

        
    }
};