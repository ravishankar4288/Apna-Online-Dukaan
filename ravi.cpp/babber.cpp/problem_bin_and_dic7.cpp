#include <iostream>
#include<bitset>
#include<math.h>
using namespace std;
int main(){
    // // reverse integer (simple form)
    // int n ; 
    // cout<<"enter your number :"<<endl;
    // cin>>n;
    // int ans = 0;
    // while(n!=0){
    //     int digit = n%10;
    //     ans =  ((ans*10) + digit);
    //     n= n/10;
    // }
    // cout<<ans;

    //  // complement base 10 integer
    // int n ; 
    // cout<<"enter your number :"<<endl;
    // cin>>n;
    // int mask = 0;
    // int a = ~n;
    // int ans;
    //     if (n==0){
    //     cout<<"your reverse binary decimal number :"<<1<<endl;
    // }
    // else{
    // while(n!=0){
    //     mask = (mask<<1) | 1;
    //     n = n>>1;
        
    // }
    //  ans = (a) & mask ;
    // cout<<"your reverse binary decimal number :"<<ans<<endl;
    // }

// // if number is 2^ than output give 'True' else 'Flase'
// int n;
// cout<<"enter your number : "<<endl;
// cin>>n;
// int digit;
// if(n==1){
//     cout<<"true"<<endl;
// }
// else{
// while(n!=1){
//      digit = n%2;
//      if(digit==1)
//      break;
//     n = n/2;
// }
// if (digit==0){
//     cout<<"True"<<endl;
// }
// else{
//     cout<<"false"<<endl;
// }
// }

// 2nd method 
int n ;
cout<<"enter your number :"<<endl;
cin>>n;
int ans ;
for(int i = 0 ; i<=30 ; i++){
   ans = pow (2,i);
   
   if(ans == n)
   break;
}    
if(ans == n){
    cout<<"True"<<endl;

}
else{
    cout<<"Flase"<<endl;
}
}

