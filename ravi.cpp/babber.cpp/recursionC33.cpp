#include<iostream>
using namespace std ;

/*
//Q-8 : check given array is sorted or not 
bool issorted(int arr[] , int size ){
    // base case
    if(size==0 || size==1 ){
        return true;
    }

// recursive relation 
if(arr[0] > arr[1]){
    return false;
}
else{
    bool ans = issorted(arr+1 , size-1);
     return ans ;
}
}

int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[100] ;
    cout<<"enter element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    bool ans =issorted(arr , n);
    if(ans ){
        cout<<"This array is sorted : "<<endl;
    }
    else{
        cout<<"Not sorted : "<<endl;
    }
}          */

/*
//Q-9 : find the sum of given array 
int getsum(int arr[] , int size ){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    // recursive relation 
    int ans = getsum(arr+1 , size-1);
    int sum =  arr[0] + ans ;
    return sum;
}
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[100] ;
    cout<<"enter element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
int answer = getsum(arr , n);
cout<<"this is the sum of array : "<<answer<<endl;
}                                                     */


/*
// Q-10 : Apply linear search on array by using recursion 
bool searching(int arr[] , int size , int digit ){
    // base case
if(size==0){
    return false;
}

// recursion relation 
if(arr[0] == digit){
    return true;
}
else{
    bool ans = searching(arr+1 , size-1 , digit);
    return ans ;
}
    
}
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[100] ;
    cout<<"enter element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int digit ;
    cout<<"Give the digit for checking "<<endl;
    cin>>digit;
    bool ans = searching(arr , n , digit);
    if(ans){
        cout<<"This digit is found "<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }
}      */


// Q-11 : Implement binary search with the help of recursion 
bool binarySearch(int arr[] ,int size, int start , int end , int key){
    //base case
    if(size > end){
        return false;
    }

    // recursive relation 
int mid = (start + end)/2;
if(arr[mid] == key){
    return true;
}
else if (arr[mid] > key ){
    return binarySearch(arr , size , start, mid-1 , key);
}
else{
    return binarySearch(arr, size , mid+1 , end , key);
}

}
int main(){
    int n;
    cout<<"enter size of array : "<<endl;
    cin>>n;
    int arr[100] ;
    cout<<"enter element of array in sorted order : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    int key ;
    cout<<"Give the digit for checking "<<endl;
    cin>>key;
    bool ans = binarySearch(arr, n , 0 , n-1 , key);
    if(ans){
        cout<<"this number is present : "<<endl;
    }
    else{
        cout<<"Not present : "<<endl;
    }
}