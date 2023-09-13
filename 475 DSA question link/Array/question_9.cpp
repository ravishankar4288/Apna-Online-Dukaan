//*****************************************************
//Q-1 :   Minimum number of jumps
#include <bits/stdc++.h>

class Solution{
  public:
    int minJumps(int arr[], int n){
        // if(arr[0] == 0){
        //     return -1;
        // }
        
        // if(n == 1){
        //     return 0;
        // }
        
        int jump = 0;
        int pos = 0;
        int des = 0;
        
        for(int i=0; i<n; i++){
            des = max(des, arr[i]+i);
            
            if(pos == i){
                pos = des;
                jump++;
            }
            
            if(pos >= n-1){
                return jump;
            }
        }
        return -1;
    }
};
