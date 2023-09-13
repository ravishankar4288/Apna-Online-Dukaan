#include<iostream>
using namespace std;

/*
//Q-1 : find the index of given element of array BY Binary search 
int search_key(int num[] , int size , int key){
    int start = 0;
    int end = size - 1;
   // int mid = (start+end)/2 ;
   int mid = start + (end-start)/2;     // this is for not go out from range of int
    while(mid <= end) {
        if(num[mid] == key){
            return mid;
        }
       if(num[mid] < key){
        start = mid + 1;
       }
       else{
        end = mid - 1;
       }
       //mid = (start+end)/2 ; 
        mid = start + (end-start)/2; 
    }
    return -1;    
}

int main(){
int even[9] = {2,4,6,8,10,12,14,16,18} ;
int odd[10] = {1,3,5,7,9,12,15,18,21,24};

int index = search_key(even , 9 , 18);
cout<<"even index of 18 : "<<index<<endl;

int index1 = search_key(odd , 10 , 24);
cout<<"odd index of 24 : "<<index1<<endl;

}   */


// Q-2 same question 
int search_key(int num[] , int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2 ;
    while(mid <= end){
        if (num[mid] == key){
            return mid;
        }
        else if(num[mid] > key ){
            end = mid - 1;
        }
        else if(num[mid] < key){
            start = mid + 1;
        }
        mid = (start + end)/2 ;
    }
    return -1;
}

int main(){
    int size;
    cout<<"enter size of array "<<endl;
    cin>>size;
    int num[1000];
    cout<<"enter monotonic function "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>num[i];
    }
    int n;
    cout<<"enter your find number "<<endl;
    cin>>n;
    int index = search_key(num , size , n );
      cout<<"index of this number is "<<index<<endl;
    if(index == -1){
        cout<<"this number is not avialable "<<endl;
    }
} 