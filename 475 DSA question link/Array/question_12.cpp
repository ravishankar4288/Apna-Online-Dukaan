//*****************************************************
//Q-1 :   Count pairs with given sum
#include <bits/stdc++.h>

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        //Approch-1
        int count = 0;
        for(int i=0; i<n; i++){
             for(int j=i+1; j<n; j++){
                if(arr[i]+arr[j] == k){
                    count++;
                } 
            }
        }
        return count;
        
        //Approch-2
        unordered_map<int,int > m;
        int count = 0;
        
        for(int i=0; i<n; i++){
            int b = k - arr[i];
            if(m[b]){
                count += m[b];
            }
            m[arr[i]]++;
        }
        return count;
    }
};

