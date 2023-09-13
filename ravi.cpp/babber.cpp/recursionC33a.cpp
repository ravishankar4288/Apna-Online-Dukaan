#include<iostream>
using namespace std;

/*
//H.W :- Q-1 : find the index of given element of array
int getIndex(int arr[] , int start , int end , int key ){
    // base case
    if(start > end){
        return -1;
    }

    // recursion relation 
    int mid = start + ( end - start )/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key ){
        return getIndex(arr,size, mid + 1 , end , key);
    }
    else{
        return getIndex(arr , size , start , mid - 1 , key);
    }
}
int main(){
    int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value of key : "<<endl;
    cin>>key;
int ans = getIndex(arr , 0 , n-1 , key);
cout<<"Index of "<<key<<" is : "<<ans <<endl;
if(ans == -1 ){
    cout<<"This element is not present in array . "<<endl;
}
}     */

// Q-2: first and last position of an element in sorted array
int index1(int arr[] ,int start , int end , int key ){
    // base case
    if(start > end ){
        return -1;
    }

    // recursive relation 
    int ans1 = -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == key){
        ans1 = mid;
        end = mid - 1;     
    }
    else if(arr[mid] < key ){
        return index1(arr, mid + 1 , end , key);
    }
    else{
        return index1(arr , start , mid - 1 , key);
    }
    return ans1;
}

int index2(int arr[] ,int start , int end , int key ){
    // base case
    if(start > end ){
        return -1;
    }

    // recursive relation 
    int ans2 = -1;
    int mid = start + (end - start)/2;
    if(arr[mid] == key){
        ans2 = mid ;
        end = mid + 1;
      
    }
    else if(arr[mid] < key ){
        return index1(arr, mid + 1 , end , key);
    }
    else{
        return index1(arr , start , mid - 1 , key);
    }
    return ans2;
}
int main(){
     int n;
    cout<<"enter the size of array : "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value of key : "<<endl;
    cin>>key;
    int ans1 = index1(arr , 0 , n-1 , key);
    int ans2 = index2(arr , 0 , n-1 , key);
    cout<<" 1st index of "<<key<<"  is : "<<ans1<<endl;
    cout<<" 2nd index of "<<key<<"  is : "<<ans2<<endl;
    if(ans1 == -1 || ans2 == -1){
        cout<<"Not present ."<<endl;
    }
}