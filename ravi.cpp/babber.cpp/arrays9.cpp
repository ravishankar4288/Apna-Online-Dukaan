#include<iostream>
using namespace std;
int main(){
    int number[15];
    //accessing an array
    cout<<"value of 14 index : "<<number[14]<<endl;
    
    // initialising an array
    int num[3]={2,5,11};
    cout<<"value of 2 index :"<<num[2]<<endl;
   // cout<<"value of 3 index :"<<num[3]<<endl;  // index 3 is not possible index range
                                                 // is [ 0 , n-1 ]

int num1[20] = {2,4,5,6,8,9};
int n= 20;
cout<<"printing the array"<<endl;
for(int i=0 ; i<n ; i++){
    cout<<num1[i]<<"  ";
}

// initialising all location 0
int num2[10] = {0};
int n=10;
for(int i = 0 ; i<n ; i++){
    cout<<num2[i]<<"  ";


}
}



//Array with funtion
#include<iostream>
using namespace std;
void printarray(int arr[] , int size ){
    for(int i = 0 ; i<size ; i++){
      cout<<arr[i]<<"  " ;
    }
}
int main(){
    int num1[20] = {0};
    int n1 = 20;
    printarray(num1 , n1);
   cout<<endl;
   int num1_size = sizeof(num1)/sizeof(int);
   cout<<"size of num1 : "<<num1_size<<endl;

cout<<endl;

    int num2[15] ={1,2,3,4,5,6,7,8,9,0,};
    int n2 = 15;
    printarray(num2 , n2);
    cout<<endl;
    int num2_size = sizeof(num2)/sizeof(int);
    cout<<"size of num2 : "<<num2_size<<endl;

 }



