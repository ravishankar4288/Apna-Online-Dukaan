//*****************************************************
//Q-1 : Move all negative elements to end
#include <bits/stdc++.h>
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
    
      int j=0;
        int arr1[n];
        
        for(int i=0; i<n; i++){
            if(arr[i] >= 0){
              arr1[j++] = arr[i];
            }
        }
        
        for(int i=0; i<n; i++){
            if(arr[i] < 0)
              arr1[j++] = arr[i];
        }
        
        for(int i=0; i<n; i++){
            arr[i] = arr1[i];
        }
    }
};
