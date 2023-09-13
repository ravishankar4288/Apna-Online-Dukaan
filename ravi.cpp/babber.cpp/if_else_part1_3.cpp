#include <iostream>
using namespace std;
int main(){
              // find out a is +ve or -ve 
    // int a;
    // cin>>a;
    // if(a>0){
    //     cout<<"A is positive "<<endl;
    // }
    // else{
    //     cout<<"A is nigative "<<endl;
    // }

            // find out a>b or b>a
// int a;
// int b;
// cout<<"enter the value of a "<<endl;
// cin>>a;
// cout<<"enter the value of b"<<endl;
// cin>>b;
// if(a>b){
//     cout<<"a is greater than b "<<endl;
// }
//  else{
//     cout<<"b is greater than a "<<endl;
// }
      

      // find out a is +ve , -ve or zero
// int a;
// cout <<"enter the value a is :"<<endl;
// cin>>a;
// if(a>0){
//     cout <<"A is +ve :"<<endl;
// }
// else if(a<0){
//     cout<<"A is -ve :"<<endl;
// }
// else{
//     cout<<"A is zero :"<<endl;
// }

       //find the a>b, b>a or a=b
// int a,b;
// cout<<"enter the value a is : "  <<endl;
// cin>>a;
// cout<<"ënter the value b is :"<<endl;
// cin>>b;
// if(a>b){
//     cout<<"a is greater than b :"<<endl;
// }     
// else if(b>a){
//     cout<<"b is greater than a :"<<endl;
// }
// else{
//     cout<<"a is equal to b :"<<endl;
// }

               // Homework  
//  char ch ;
//  cout<<"enter the value of char ch is :"<<endl;
//  cin>>ch;
//  if(ch >= 'a' && ch <= 'z')   {
//     cout<<"this is lower case :"<<endl;
//  }  
//  else if (ch >= 'A' && ch <= 'Z'){
//     cout<<"this is upper case :"<<endl;
//  }  
// else if(ch >= '0' && ch <= '9'){
//     cout<<"this is numeric case :"<<endl;
// }
// else {
//     cout<<" this data is not in range : "<<endl;
// }


             //lopping (while loop)
    // print 1 to n
//     int n;
//     cout<<"enter the value of n :"<<endl;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//       cout<<i <<"  ";
//       i = i+1;
//     }

        // fin sum 1 to n
// int n ;
// cout<<"enter the value of n :"<<endl;
// cin>>n;
// int i = 1;
// int sum =0;
// while(i<=n){
//       sum = sum + i;
//       i = i + 1;
// }        
// cout<<"this is  the sum of first "<<n<<" natural number is :"<<sum<< "  ";


      // find the sum of even number 1 to n
// int n ;
// cout<<"enter the value of n :"<<endl;
// cin>>n ;
// int i = 2;
// int sum = 0;
// while(i<=n){
//       sum =sum + i ;
//       i = i+2;
// } 
// cout<<"this is the sum of first "<<n<<" natural even number is :" <<sum<<endl;    

      
      // select only prime number
      int a;
      cout<<"write your number randomly :"<<endl;
      cin>>a;
      int i = 2;
      while(i<a){
           
      if( a % i==0){
            cout<<" this is not prime number for:"<<i<<endl;
        }  
        else{
            cout<<"this is  a prime number for :"<<i<<endl;
        }
         i = i+1;

      }

}
