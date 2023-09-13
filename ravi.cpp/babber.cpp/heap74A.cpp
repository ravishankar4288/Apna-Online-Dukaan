#include <bits/stdc++.h> 
void heapify(vector<int> &arr, int n, int i){
    int smallest = i;
    int leftNode = 2*i +1;
    int rightNode = 2*i + 2;

    if(leftNode < n && arr[smallest] >= arr[leftNode]){
        smallest = leftNode;
    }

    if(rightNode < n && arr[smallest] >= arr[rightNode]){
        smallest = rightNode;
    }

    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n , smallest);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n = arr.size();
    for(int i=n/2-1 ; i>=0; i--){
        heapify(arr,n,i);
    }
    return arr;

}
