//*****************************************************
//Q-1 :  maximum of product of subarrays
#include <bits/stdc++.h>

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long pre = 1;
        long long suf = 1;
        long long ans = INT_MIN;

        for(int i=0; i<n; i++){
            if(pre == 0)
                pre = 1;

            if(suf == 0)  
                suf = 1;

            pre = pre*arr[i] ;
            suf = suf*arr[n-i-1] ;
            ans = max(ans, max(pre, suf));
        }
        return ans;
	}
};

