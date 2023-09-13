//*****************************************************
//Q-1 : find sum of given array
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    //base case 
    if(n==0){
        return 0;
    }
    else{
        return arr[n-1] + solve(arr, n-1);
    }   
}
int main(){
    int arr[5] = {2, 4, 6, 8, 9};
    cout<<"this is the sum of array  : ";
    cout<<solve(arr,5);
}