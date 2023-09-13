#include<iostream>
using namespace std;
// Q-1 : Implement quick sort by using recursion 

int partition(int arr[] , int s , int e){
    int pivot = arr[s];

    // count number digit that less than pivot
    int count = 0;
    for(int i = s+1 ; i<= e ; i++){
        if(arr[i] <= pivot ){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex] , arr[s]);

    // left and right part ko dekhate hai 
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    //return pivotIndex;    --> it is an optinal
}

void quickSort(int arr[] , int s , int e){
    // base case 
    if(s >= e ){
        return ;
    }

    // partition
    int p = partition(arr , s , e);

    // left part sort
    quickSort(arr , s , p-1);

    // right part sort
    quickSort(arr , p+1 , e);
}
int main(){
    int arr[10] = { 4 , 2 , 6 , 4, 8 , 19 , 0 , 23 , 11 , 1};
    int n = 10;
    quickSort(arr , 0 , n-1);
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}