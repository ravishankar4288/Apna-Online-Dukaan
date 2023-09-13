#include<iostream>
using namespace std;
// sort array by Merge sort Method 
void merge(int *arr , int s , int e ){
    int mid = s + (e-s)/2;

    // lenght of two array 
    int len1 = (mid - s) + 1;
    int len2 = e - mid ;

    // create two array
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayInex = s ;
    for(int i = 0 ; i<len1 ; i++){
        first[i] = arr[mainArrayInex++ ];
    }

    mainArrayInex = mid + 1;
    for(int i = 0 ; i< len2 ; i++){
        second[i] = arr[mainArrayInex++];
    }
    
// merge two sorted array 
int index1 = 0;
int index2 = 0;
mainArrayInex = s;
while(index1 < len1 && index2 < len2){
    if(first[index1] < second[index2]){
        arr[mainArrayInex++] = first[index1++];
    }
    else{
        arr[mainArrayInex++] = second[index2++];
    }
}
while(index1 < len1){
    arr[mainArrayInex++] = first[index1++];
}
while(index2 < len2){
     arr[mainArrayInex++] = second[index2++];
}
delete [] first;
delete [] second;
}


void mergeSort(int *arr , int s , int e){
     // base case 
     if(s >= e){
        return ;
     }

    int mid = s + (e-s)/2;
     // sort left part
     mergeSort(arr , s , mid);
     
     // sort right part 
     mergeSort(arr , mid+1 , e);

     // merge two array
     merge(arr , s , e);   
}

int main(){
    int arr[7] ={3 , 1 , 93 , 5 , 88 ,43 , 90};
    int n = 7;
    mergeSort(arr , 0 , n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}