//*****************************************************
//Q-1 :House Robber II
#include <bits/stdc++.h> 
long long int solve(vector<int> &nums){
    //step-1
    long long int n = nums.size();
    long long int prev2 = 0;
    long long int prev1 = nums[0];

    //step-3
    for (int i = 1; i < n; i++) {
      long long int enclu = prev2 + nums[i];
      long long int exclu = prev1 + 0;
      long long int curr = max(enclu, exclu);

      prev2 = prev1;
      prev1 = curr;
    }
    return prev1;
}
long long int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();

    if(n==1){
        return valueInHouse[0];
    }

    vector<int> first, second;
    for(int i=0; i<n; i++){
        if(i != n-1){
            first.push_back(valueInHouse[i]);
        }

        if(i != 0){
            second.push_back(valueInHouse[i]);
        }
    }

    return max(solve(first), solve(second));
    
}