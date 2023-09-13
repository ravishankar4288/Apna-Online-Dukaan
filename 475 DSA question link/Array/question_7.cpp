//*****************************************************
//Q-1 : Cyclically rotate an array by one
#include <bits/stdc++.h>

void rotate(int arr[], int n)
{
    int arr1[n+1];
    int j=0;
    arr1[j++] = -1;
    
    for(int i=0; i<n; i++){
        arr1[j++] = arr[i];
    }
    
    swap(arr1[0], arr1[n]);
    
    for(int i=0; i<n; i++){
        arr[i] = arr1[i];
    }
    
}