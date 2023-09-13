#include<iostream>
using namespace std;

// question -->> sorted array 
void selectionSort(int arr[] , int size){
    for(int i = 0 ; i < size  ; i++ ){
       int minIndex = i;
       for(int j = i + 1 ; j < size  ; j++){
        if(arr[j] < arr[minIndex]){
        minIndex = j ;
        }
       swap(arr[minIndex] , arr[i]);
    }   
}
}

int main(){
    int size ;
    cout<<"write the array of size "<<endl;
    cin>>size;
    int arr[10000];
    cout<<"write your array elements "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }
    cout<<"this is sorted array "<<endl;
   selectionSort(arr , size);
for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";

    
}   
}