//*****************************************************
//Q-1 : find a power b = a^b
#include <bits/stdc++.h> 
int power(int a, int n){
    //base case
    if(n==0){
        return 1;
    }

    int ans;

    if(n%2 == 0){
        ans = power(a, n/2)*power(a, n/2);
    }
    else{
        ans = a*power(a, n/2)*power(a, n/2);
    }

    return ans ;
}
using namespace std;
int main(){
    int a, b;
    cout<<"Enter your number a & b "<<endl;
    cin>>a >>b;
    cout<<power(a, b);
}