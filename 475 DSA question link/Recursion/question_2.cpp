//*****************************************************
//Q-1 : Count Ways To Reach The N-th Stairs
#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
    //  Write your code here.
    //base case 
    int n = nStairs;
    if(n<0){
        return 0;
    }

    if(n==0 || n==1){
        return 1;
    }

    int ans = countDistinctWays(n-1) + countDistinctWays(n-2);
    return ans;
}