#include<bits/stdc++.h>
using namespace std;

//*****************************************************
//Q-1 :Nth Fibonacci Number (by memoization)
int fibbo(int n, vector<int> &dp){
        //base case
        if(n==0 || n==1){
                return n;
        }

        //step-3
        if(dp[n] != -1){
                return dp[n];
        }

        //step-2
        dp[n] = fibbo(n-1, dp) + fibbo(n-2, dp);
        return dp[n];
}

int main()
{
        int n;
        cin>>n;

        //step-1: 
        vector<int>dp(n+1);
        for(int i=0; i<=n; i++){
                dp[i] = -1;
        }
        cout<<fibbo(n , dp)<<endl;
        return 0;
}

//*****************************************************
//Q-1 :Method-2: by tabulation method (bottom to top)
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     
     //step-1
     vector<int> dp(n+1);
     
     //step-2
     dp[0] = 0;
     dp[1] = 1;
     
     //step-3
     for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
     }
     
     cout<<dp[n]<<endl;
     
     
}


//*****************************************************
//Q-1 :Method-3: by space optimisation method 
#include<bits/stdc++.h>
using namespace std;
int main()
{
       int n;
       cin>>n;
       
       //step-1
       int prev1 = 1;
       int prev2 = 0;
       
       if(n==0){
        cout<<prev2<<endl;     
       }
       
       //step-2
       for(int i=2; i<=n; i++){
        int curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;       
       }
       
       cout<<prev1<<endl;
}