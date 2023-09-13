#include<iostream>
using namespace std;

/*
// Q-1 : find pivot value(after rotating sorted array and find min value)
int pivot_value(int num[] , int size ){
    int start = 0;
    int end = size -1;
    //int mid = (start + end)/2;
    int mid = start + (end-start)/2;
    int ans;
    while (start < end){
       if(num[mid] >= num[0]){
        start = mid + 1;
       }
       else{
        end = mid;
       }
       mid = start + (end-start)/2;
    }
    return num[start];
}
int main(){
    int size ;
    cout<<"enter the array size :"<<endl;
    cin>>size;
    cout<<"please enter your array number :"<<endl;
    int num[100];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

cout<<"this is the pivot value of given array :"<<pivot_value(num , size )<<endl;

}    */

/*
//Q-2 : serach key in rotated array
int getpivot(int num[] , int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start < end){
        if(num[mid] >= num[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binary_search(int num[] , int s , int e , int key){
    int start = s;
    int end = e;
    int ans ;
    int mid = start + (end - start)/2;
    while(start<=end){
    if(num[mid] == key){
      ans = mid;
    }
    if (num[mid] > key){
        end = mid - 1;
    }
    else {
        start = mid + 1;
    }
    mid = start + (end - start)/2;
    }
    return ans ;
}

int main(){
    int n ;
    cout<<"enter your size of array : "<<endl;
    cin>>n;
    int num[n];
    cout<<"enter element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>num[i];
    }

    int k ;
    cout<<"enter that number which find : "<<endl;
    cin>>k;
    int pivot = getpivot(num , n);
    if(k >= num[pivot] && k <= num[n-1] ){
        cout<<"index of that number is : ";
        cout<<binary_search(num ,pivot, n-1 , k);
    }
    else if(k >= num[0] && k <=num[pivot - 1]) {
         cout<<"index of that number is : ";
        cout<<binary_search(num , 0 , pivot - 1, k);
    }
    else{
        cout<<"this value is not belongs to this array : "<<endl;
    }
}     */


//find square root by using binary seach
int search_square_root(int num[] , int size , int your_no){
    int start = 0;
    int end = size -1 ;
    int mid = (start + end)/2;
    while(mid <= end){
    if(your_no == num[mid]*num[mid]){
        return num[mid];
    }
    else if(your_no > num[mid]*num[mid]){
        end = mid - 1;
    }
    else if(your_no < num[mid]*num[mid]){
        start = mid + 1;
    }
    else{
        cout<<"this number of square root is not possible "<<endl;
    }
    mid = (start + end)/2;
}
return -1;

}

int main(){
int  n ;
cout <<"enter your number "<<endl;
cin>>n;
int *arr = new int[n] ;
// for(int i = 1 ; i <= n ; i++){
//     cout<<arr[i];
// }

int ans = search_square_root(arr , n , n);
cout<<" square root is "<<ans;

}  

