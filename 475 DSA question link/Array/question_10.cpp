//*****************************************************
//Q-1 :   find the  duplicate number in array
#include <bits/stdc++.h>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Approch-1
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[j] == nums[i]){
                    return nums[i];
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return -1;

        //Approch-2    
        int n = nums.size();
        sort(nums.begin(), nums.end()); 
        for(int i=0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
            else{
                continue;
            }
        }
        return -1;
    }
};