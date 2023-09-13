#include<iostream>
using namespace std;

/*
// Q-1: first and last position of an element in sorted array
int first_index(int num[] , int size , int n){
    int start = 0 ; 
    int end = size - 1;
    int ans1 = -1;
    int mid = (start + end ) / 2;
    while(start <= end ){
        if (num[mid] == n ){
            ans1 = mid;
            end = mid - 1;
        }
        else if (num[mid] > n ){
           end = mid - 1; 
        }
        else{
            start = mid + 1;
        }
        mid = (start + end ) / 2;
    }
    return ans1;
}

int last_index(int num[] , int size , int n){
    int start = 0 ; 
    int end = size - 1;
    int ans2 = -1;
    int mid = (start + end ) / 2;
    while(start <= end ){
        if (num[mid] == n ){
            ans2 = mid;
           start = mid + 1;
        }
        else if (num[mid] > n ){
           end = mid - 1; 
        }
        else{
            start = mid + 1;
        }
        mid = (start + end ) / 2;
    }
    return ans2;
}

int main(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    int num[21] = {0,1,1,1,2,3,3,3,3,5,6,6,6,7,8,9,10,10,10,10,13};
    int index1 = first_index(num , 21 , n);
    int index2 = last_index(num , 21 , n);
    cout<<"index of given number first  : "<<index1<<endl;
    cout<<"index of given number last  : "<<index2<<endl;
    

// Q-1 : part-B --> find total number of same occurance (like , koi number kitne time aya hai array me )    
int sum = (index2 - index1) + 1;
cout<<"total number of occurance : "<<sum<<endl;
   
}  */


// find pick value
int peak_value(int arr[] , int size ){
    int start = 0;
    int end = size - 1;
    //int mid = (start + end)/2;
    int mid = start + (end-start)/2;
    while (start < end ){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end = mid ;
        }
        mid = start + (end-start)/2;
    }
    return start ;

}
int main(){
    int size ;
    cout<<"enter the array size :"<<endl;
    cin>>size;
    cout<<"please enter your array number :"<<endl;
    int num[size];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

cout<<"this is the peak value of given array :"<<peak_value(num , size )<<endl;

}




