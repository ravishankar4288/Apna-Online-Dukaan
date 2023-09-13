#include<iostream>
using namespace std;
// void update(int arr[] , int n){
//     cout<<"Inside the function :"<<endl;
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//      for(int i = 0 ; i<5 ; i++){
//         cout<<arr[i]<<"  ";
// }
// cout<<endl;
   
//    cout<<"Going to main function :"<<endl;
// }
// int main(){
    
//     int arr[5] = {2 , 4 ,6 , 8 , 10};
//     update(arr , 5);
//     cout<<"printing the main function :"<<endl;
//     for(int i = 0 ; i<5 ; i++){
//         cout<<arr[i]<<"  ";
//     }

// }


//Homework --> find the sum of given array element 

int main(){
    int size ;
    cout<<"select your array size :"<<endl;
    cin>>size;
    cout<<"enter your array element :"<<endl;
    int sum = 0;
    int num[100];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
        sum = sum + num[i];
    }
cout<<"this is sum your array element : "<<sum<<endl;
}