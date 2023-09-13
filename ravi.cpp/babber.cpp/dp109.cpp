//*****************************************************
//Q-1 : Ninja And The Fence
//by recursion

#include <bits/stdc++.h> 
#define MOD 1000000007

int sum(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b){
    return (a%MOD * b%MOD)%MOD;
}

int solve(int n, int k){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return sum(k,mul(k,k-1));
    }

    int ans = sum(mul(solve(n-2, k), k-1), mul(solve(n-1, k), k-1));
    return ans; 
}

int numberOfWays(int n, int k) {
    return solve(n, k);
}


//by recurion + memousation
#include <bits/stdc++.h> 
#define MOD 1000000007

int sum(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b){
    return (a%MOD* 1LL * b%MOD)%MOD;
}

int solve(int n, int k, vector<int> &dp){
    //base case
    if(n==1){
        return k;
    }
    if(n==2){
        return sum(k,mul(k,k-1));
    }

    //step-3
    if(dp[n] != -1){
        return dp[n];
    }

    //step-2
    dp[n] = sum(mul(solve(n-2, k, dp), k-1), mul(solve(n-1, k, dp), k-1));
    return dp[n]; 
}

int numberOfWays(int n, int k) {
    //step-1
    vector<int>dp(n+1, -1);
    return solve(n, k, dp);
}



//By tabulation
#include <bits/stdc++.h> 
#define MOD 1000000007

int sum(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b){
    return (a%MOD* 1LL * b%MOD)%MOD;
}

int solve(int n, int k){
    //step-1
    vector<int> dp(n+1, 0);

    //step-2
    dp[1] = k;
    dp[2] = sum(k,mul(k,k-1));

    //step-3
    for(int i=3; i<=n; i++){
        dp[i] = sum(mul(dp[i-2], k-1), mul(dp[i-1], k-1));
    }

    return dp[n]; 
}

int numberOfWays(int n, int k) {
    return solve(n, k);
}



// by space optimisation
#include <bits/stdc++.h> 
#define MOD 1000000007

int sum(int a, int b){
    return (a%MOD + b%MOD)%MOD;
}

int mul(int a, int b){
    return (a%MOD* 1LL * b%MOD)%MOD;
}

int solve(int n, int k){
    //step-1
    int prev2 = k;
    int prev1 = sum(k,mul(k,k-1));

    //step-2
    for(int i=3; i<=n; i++){
        int ans = sum(mul(prev2, k-1), mul(prev1, k-1));

        //step-3
        prev2 = prev1;
        prev1 = ans;
    }

    return prev1; 
}

int numberOfWays(int n, int k) {
    return solve(n, k);
}

