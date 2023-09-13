//*****************************************************
//Q-1 : Median of 2 Sorted Arrays of Different Sizes
#include <bits/stdc++.h>
class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        // Your code goes here
        int n1 = array1.size();
        int n2 = array2.size();
        int n = n1 + n2;
        
        vector<int> arr(n);
        int i=0; 
        int j=0;
        int k=0;
        
        while(i<n1 && j<n2){
            if(array1[i] < array2[j]){
                arr[k++] = array1[i++];
            }
            else{
                arr[k++] = array2[j++];
            }
        }
        
        while(i<n1){
            arr[k++] = array1[i++];
        }
        
        while(j<n2){
            arr[k++] = array2[j++];
        }
        
        if(n%2 == 1){
            return arr[n/2];
        }
        else{
            double a = arr[n/2];
            double b = arr[n/2-1];
            double res = (a+b)/2;
            return res;
            
        }
    
    }
};