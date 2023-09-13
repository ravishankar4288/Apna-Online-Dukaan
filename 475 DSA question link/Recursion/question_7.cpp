//*****************************************************
//Q-1 : apply binary search on an array using recursion
#include <bits/stdc++.h> 
int solve(vector<int> &nums, int start, int end, int target){
    //base case
    if(start>end){
        return -1;
    }

    int mid = start+(end-start)/2;

    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]<target){
        solve(nums, mid+1, end, target);
    }
    else{
        solve(nums, start, mid-1, target);
    }
}

int search(vector<int> &nums, int target) {
    int n = nums.size();
    int start = 0;
    int end = n-1;
    int ans = solve(nums, start, end, target);
    return ans;
}