

       // convert decimal to binary 
// #include<iostream>
// #include<bitset>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter your decimal number :"<<endl;
//     cin>>n;
//     bitset<32> x(n);
//     cout<<"Binary number is :"<<n<<endl;
//     cout<<x;

// }

#include<iostream>
#include<math.h>
using namespace std;
int main(){

    // // convert +ve decimal  to binary no.
    // int n;
    // cout<<"enter your decimal number :"<<endl;
    // cin>>n;
    // int ans = 0;
    // int i = 1;
    // while(n!=0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10,i)) + ans ;
    //     n = n>>1;
    //     i++;
    // }
    // cout<<"your binaray number : "<<ans;


// convert -ve decimal number to binary ----> pending 

// conver binary to decimal number
int n;
cout<<"enter your binary number :"<<endl;
cin>>n;
int ans = 0;
int i = 0;
while(n!=0){
    int digit = n%10;
    if (digit == 1){
        ans = (pow(2, i)) + ans;
        
    }
    n = n/10;
    i++;  
}
cout<<"this is your decimal number :"<<ans<<endl;
}