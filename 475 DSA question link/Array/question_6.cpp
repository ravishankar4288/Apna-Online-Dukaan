//*****************************************************
//Q-1 : Union of two arrays
#include <bits/stdc++.h>
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
       int arr[n+m];
       int j=0;
       int ans = 1;
       
       for(int i=0; i<n; i++){
           arr[j++] = a[i];
       }
       
       for(int i=0; i<m; i++){
           arr[j++] = b[i];
       }
       
       sort(arr, arr+(n+m));
       for(int i=0; i<(n+m)-1; i++){
           if(arr[i] != arr[i+1]){
               ans++;
           }
       }
       return ans;
    }
};