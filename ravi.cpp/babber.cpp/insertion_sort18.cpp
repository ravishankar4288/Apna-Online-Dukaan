#include<iostream>
using namespace std;
void insertion_sort(int arr[] , int size){
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i - 1;
        for(  ; j>=0 ; j--){

            if (arr[j] > temp) {
                //shifting
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
        
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
    insertion_sort(arr , size);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
}
}