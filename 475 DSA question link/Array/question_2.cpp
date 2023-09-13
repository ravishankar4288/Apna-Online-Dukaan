//*****************************************************
//Q-1 :  Find minimum and maximum element in an array
#include <bits/stdc++.h>
pair<long long, long long> getMinMax(long long a[], int n) {
    
    pair<long long, long long> ans;
    long long  maxi = INT_MIN;
    long long mini = INT_MAX;
    
    for(int i=0; i<n; i++){
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    
    ans.first = mini;
    ans.second = maxi;
    return ans;
    
}