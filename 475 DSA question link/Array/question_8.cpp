//*****************************************************
//Q-1 :  Kadane's Algorithm (Find the contiguous sub-array)
#include <bits/stdc++.h>

//brut force method t.c-> O(n^2)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        int ans = INT_MIN;
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                sum = sum + arr[j];
                ans = max(ans, sum);
            }
            
            sum = 0;
        }
        return ans;
        
    }
};


//By Kadane's method
class Solution{
    public:
    long long maxSubarraySum(int arr[], int n){ 
             
        //long long ans = INT_MIN;
        long long ans = arr[0];
        long long sum = 0;
        
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
            ans = max(ans, sum);
            
            if(sum < 0)
               sum = 0;
        }
        return ans;
        
    }
};


