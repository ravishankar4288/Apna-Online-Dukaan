#include<iostream>
using namespace std;
int main(){
    // print 1 to n number by using for loop
// int n ;
// cout<<"enter your number :"  <<endl;
// cin>>n;
// for(int i = 1 ; i<=n ; i++) {
//     cout<<i<<"  ";
// } 

         //OR
// int n; 
// cout<<"enter your number :"  <<endl;
// cin>>n;
// int i =1;
// for ( ; i<=n ; i++){
//     cout<<i <<"  ";
// }       


              //OR
// int n ;
// cout <<"enter your number :"<<endl;
// cin>>n;
// int i =1;
// for(; i<=n ; ) {
//     cout<<i<<"  ";
//     i++;
// } 


             //OR
// int n ;
// cout<<"enter your number :"    <<endl;
// cin>>n;
// int i = 1;
// for(; ; ){
//     if(i<=n){
//         cout<<i<<"  ";
//     }
//     else{
//         break;
//     }
//     i++;
// }  


// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int sum = 0;
// for(int i = 1; i<=n ; i++){
//   sum = sum + i;
// }
// cout<<sum;

// // fiboacci number
// int n ;
// cout <<"enter your number :"<<endl;
// cin>>n;
// int a = 0, b = 1;
// cout<<a<<"  "<<b<<"  ";
// for(int i = 1; i<=n ; i++){
//     int next_number = a + b;
//     cout<<next_number<<"  ";
//     a = b ;
//     b = next_number;
// }


//// Use of break; function:
// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// bool isprime = 1;
// for(int i = 2; i<=(n-1); i++){
//     if(n%i==0){
//         isprime = 0;
//         break;
//     }
//      }
//     if (isprime == 0 ){
//         cout<<"not prime "<<endl;
//     }
//     else{
//         cout<<"prime "<<endl;
//     }


// // Use of contine function
// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// for(int i = 1 ; i<=n ; i++){
//     cout<<"Jay shree Ram "<<endl;    
//     continue;                           // here after using continue function only 'Jay shree Ram' print n time not other
//     cout<<"I am Ravishankar kumar "<<endl;
// }


// Homework 
// for(int i = 0; i<=5; i++){
//     cout<<i<<" ";              // 0 , 2, 4
//     i++;
// }

// for(int i = 0; i<=5; i--){
//     cout<<i<<" ";                   // infinite zero
//     i++;
// }


// for(int i = 0; i<=15; i +=2){
// cout<<i<<" ";

// if (i&1){
//     continue;       // 0 3 5 7 9 11 13 15
// }  

// i++;
// }

// for(int i = 0; i<5; i++){
//     for(int j = i; j<=5; j++){
//         cout<<i<<" "<<j<<" , ";
//     }
// }

// for(int  i = 0; i<5; i++){
//     for(int j=i; j<=5; j++){
//         if(i+j==10){
//             break;
//         }
//         cout<<i<<"  "<<j<<endl;
//     }
// }



// // Variable and its scope
// int a= 5;
// cout<< a<<endl;
// if(true){
//     int a =3;
//     cout<<a<<endl;
// }
//                                  // ia means jo jaha hai apne area ke raja hai
//    int b= 10;
//    cout<<b<<endl;

//    if(true){
//     int b=20;
//     cout<<b<<endl;
        
// } 


// int a , b , c;
// cout<<"enter value of a:"<<endl;
// cin>>a;
// cout<<"enter value of b:"<<endl;
// cin>>b;
// cout<<"enter value of c:"<<endl;
// cin>>c;
// int muitipal = a*b*c;
// int sum = a+b+c;
// int result = (muitipal - sum );
// cout<<result<<endl;

// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int prod = 1;
// int sum = 0; 
// while(n!=0){
//     int digit ;
//      digit = n%10 ;                 pending
//     prod = prod * digit;
//     sum = sum + digit;
//     n = n/10 ;
// }
// int answer = prod - sum ;
// return answer ;

}
