//*****************************************************
//Q-1 : Combination Sum IV
//by recursion

#include <bits/stdc++.h> 
int solve(vector<int> &num, int tar){
    //base csae
    if(tar<0){
        return 0;
    }

    if(tar==0){
        return 1;
    }

    int ans=0;
    for(int i=0; i<num.size(); i++){
        ans+= solve(num, tar-num[i]);
    }
    return ans;
}
int findWays(vector<int> &num, int tar)
{
    return solve(num, tar);
}



//by reccurion + memoisation
#include <bits/stdc++.h> 
int solve(vector<int> &num, int tar, vector<int> &dp){
    //base csae
    if(tar<0){
        return 0;
    }

    if(tar==0){
        return 1;
    }

    //step-3
    if(dp[tar] != -1)
      return dp[tar];

    int ans=0;
    for(int i=0; i<num.size(); i++){
        ans+= solve(num, tar-num[i], dp);
    }
    //step-2
    dp[tar] = ans;
    return dp[tar];
}
int findWays(vector<int> &num, int tar)
{
    //step-1
    vector<int>dp(tar+1, -1);
    return solve(num, tar, dp);
}


//Tabulation 
#include <bits/stdc++.h> 
int solve(vector<int> &num, int tar){
    //step-1
    vector<int> dp(tar+1, 0);

    //step-2 from base case
    dp[0] = 1;
   
   //step-3 Traverse 1 to tar
   for(int i=1; i<=tar; i++){
       //traverse num vector
       for(int j=0; j<num.size(); j++){
           if(i-num[j] >=0)
              dp[i] += dp[i-num[j]];
       }
   }
   return dp[tar];
}

int findWays(vector<int> &num, int tar)
{
    return solve(num, tar);
}