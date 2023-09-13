#define MOD 1000000007
#include<bits/stdc++.h> 

//*****************************************************
//Q-1 :Current Submission
//By recurion
long long int countDerangements(int n) {
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    int ans = (((n-1)%MOD) *(((countDerangements(n-1))%MOD) + 
            ((countDerangements(n-2))%MOD)))%MOD;

            return ans;

}


// By recurion + memoisation
#define MOD 1000000007
#include<vector>
long long int solve(int n, vector<long long int> &dp){
        //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    //step-3
    if(dp[n] != -1){
        return dp[n];
    }

    //step-2
    dp[n] = (((n-1)%MOD) *(((solve(n-1, dp))%MOD) + ((solve(n-2, dp))%MOD)))%MOD;
    return dp[n];
}
long long int countDerangements(int n) {
    //step-1
    vector<long long int> dp(n+1, -1);
    return solve(n, dp);
}


//By tabulation
#define MOD 1000000007
#include<vector>
long long int solve(int n){
    //step-1
    vector<long long int>dp(n+1, 0);
    
    // step-2
    dp[1]=0;
    dp[2]=1;

    //step-3
    for(int i=3; i<=n; i++){
        long long int first = dp[i-1]%MOD;
        long long int second = dp[i-2]%MOD;
        long long int sum = (first + second)%MOD;
        long long int ans = ((i-1)*(sum))%MOD;

        dp[i] = ans;
    }
    return dp[n];
}
long long int countDerangements(int n) {
    return solve(n);
}



//By space optimisation
#define MOD 1000000007
#include<vector>
long long int solve(int n){

    long long int prev2=0;
    long long int prev1=1;

    //step-3
    for(int i=3; i<=n; i++){
        long long int first = prev1%MOD;
        long long int second = prev2%MOD;
        long long int sum = (first + second)%MOD;
        long long int ans = ((i-1)*(sum))%MOD;

        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}
long long int countDerangements(int n) {
    return solve(n);
}