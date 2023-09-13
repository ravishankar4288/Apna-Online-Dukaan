#include<iostream>
using namespace std;

// // find a^b by using function
// int pow(int a , int b){
//     int ans = 1;
//     for(int i= 1; i<=b ; i++){
//         ans = ans*a;
//     }
//     return ans ;
// }

// int main(){
//     int num1 , num2 ;
//     cout<<"enter your numbers ;"<<endl;
//     cin>>num1>>num2;
//     int answer = pow(num1 , num2);
//     cout<<"answer is :"<<answer<<endl;

//         int num3 , num4 ;
//     cout<<"enter your numbers ;"<<endl;
//     cin>>num3>>num4;
//     int answer1 = pow(num3 , num4);
//     cout<<"answer is :"<<answer1<<endl;

//         int num5 , num6 ;
//     cout<<"enter your numbers ;"<<endl;
//     cin>>num5>>num6;
//     int answer2 = pow(num5 , num6);
//     cout<<"answer is :"<<answer2<<endl;

    
// }


// int pow(){
//     int a , b ;
//     cin>>a>>b;
//     int ans = 1;
//     for(int i = 1 ; i<=b ; i++){
//         ans = ans * a;
//     }
//     return ans;
// }
// int main(){
//     cout<<"enter your numbers :"<<endl;
//     int ans1 = pow();
//     cout<<"answer is ;"<<ans1<<endl;

//     cout<<"enter your numbers :"<<endl;
//     int ans2 = pow();
//     cout<<"answer is ;"<<ans2<<endl;

//     cout<<"enter your numbers :"<<endl;
//     int ans3 = pow();
//     cout<<"answer is ;"<<ans3<<endl;
// }


//                   //check odd or number 
// bool isEven(){
//     int n ;
//     cin>>n;
//     if(n%2 == 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }  
// int main(){
//     cout<<"enter your number :"<<endl;
//     if(isEven() ){
//         cout<<"answer is even :"<<endl;
//     }
//     else{
//         cout<<"answer is odd :"<<endl;
//     }
// }



//                // find nCr
// int factorial (int n){
//     int fact = 1;
//     for(int i = 1 ; i<=n ; i++){
//         fact = fact * i;
//     }
//     return fact ;   
// }
// int nCr() {
//     int n , r ;
//     cin>>n>>r;
//     int num = factorial(n);
//     int denu = factorial(r) * factorial(n - r);
//     return num/denu;
// } 
// int main(){
//     cout<<"enter the value n and r :"<<endl;
//     cout<<"answer is : "<<nCr()<<endl;

//       cout<<"enter the value n and r :"<<endl;
//     cout<<"answer is : "<<nCr()<<endl;

//       cout<<"enter the value n and r :"<<endl;
//     cout<<"answer is : "<<nCr()<<endl;

//       cout<<"enter the value n and r :"<<endl;
//     cout<<"answer is : "<<nCr()<<endl;
// }        


                        // counting program 
// int count(){
//     int n;
//     cin>>n;
//     for(int i = 1; i<n ; i++){
//         cout<<i<<" ";
//     }
// } 
// int main() {
//     cout<<"enetr your number :"<<endl;
//     cout<<count()<<endl;

//     cout<<"enetr your number :"<<endl;
//     cout<<count()<<endl;

//     cout<<"enetr your number :"<<endl;
//     cout<<count()<<endl;
// }      


                       // check given number prime or not
// bool isprime(){
//     int n;
//     cin>>n;
//     for(int i = 2; i<n ; i++){
//         if(n%i==0){
//             return 1;
//     }   
// }
// return 0;
// }
// int main(){
//     cout<<"enter your number :"<<endl;
//     if(isprime()){
//         cout<<"not prime "<<endl;
//     }
//     else{
//         cout<<"prime "<<endl;
//     }
// }                



               //find A.P term = 3n + 7
// int ap( ) {
//      int n;
//        cin>>n;
//     for(int i = 1 ; i<=n ; i++){
//         cout << (3*i + 7)<<"  ";                   // ansewer is but same problem in output 
//     }
// }   
// int main(){
    
//     cout<<"enter the value of n : "<<endl; 
   
//     cout<<"series is : "<< ap() ;
// }            


// total number set bit in a & b  ---> pending

// fibonnaci series  ----> pending 

// quiz
// void update(int a){
//     a = a/2;
// }
// int main(){
//     int a = 10;
//     update(a);
//     cout<<a<<endl;
// }


// int update(int a){
//     a -= 5;
//     return a;
// }
// int main(){
//     int a = 15;
//     update(a);
//     cout<<a<<endl;
// }

int update(int a){
    int ans = a * a;
    return ans;
}
int main(){
int a = 14;
a = update(a);
cout<<a<<endl;
}
