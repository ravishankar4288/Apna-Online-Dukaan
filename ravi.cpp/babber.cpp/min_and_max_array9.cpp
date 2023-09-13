#include<iostream>
#include<climits>
using namespace std;
//     int getmax(int num[] , int n){
//         int max = INT_MIN;
//         for(int i = 0 ; i<n ; i++){
//             if(num[i] > max){
//                 max = num[i];
//             }
//         }
//         return max ;
//     }

//         int getmin(int num[] , int n){
//         int min = INT_MAX;
//         for(int i = 0 ; i<n ; i++){
//             if(num[i] < min){
//                 min = num[i];
//             }
//         }
//         return min ;
//     }

// int main(){
//     int size ;
//     cout<<"select your size of array :"<<endl;
//     cin>>size;
//     cout<<"please enter your number :"<<endl;
//     int num[100];
//     for(int i = 0 ; i<size ; i++){
//         cin>>num[i];
//     }

//     cout<<"max value is : "<<getmax(num , size)  << endl;
//    cout<<"min value is : "<<getmin(num , size)  << endl;
// }


// // same question but use pre defined function 
// int getmax(int num[] , int n ){
//     int maximum = INT_MIN;
//     for(int i = 0; i<n ; i++){
//     maximum = max(maximum , num[i]);
//     }
//     return maximum ;
// }

// int getmin(int num[] , int n ){
//     int minimum = INT_MAX;
//     for(int i = 0; i<n ; i++){
//     minimum = min(minimum , num[i]);
//     }
//     return minimum ;
// }

// int main(){
//     int size;
//     cout<<"select your array size : "<<endl;
//     cin>>size;
//     cout<<"please enter your number :"<<endl;
//     int num[100];
//     for(int i = 0 ; i<size ; i++){
//         cin>>num[i];
//     }

//     cout<<"max value is : "<<getmax(num , size)<<endl;
//     cout<<"min value is : "<<getmin(num , size )<<endl;
// }

 

int main(){
    int size ;
    cin>>size;
    int num[1000];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

    for(int i = (size - 1) ; i >= 0 ; i--){
        cout<< num[i] <<" ";
    }
 }

