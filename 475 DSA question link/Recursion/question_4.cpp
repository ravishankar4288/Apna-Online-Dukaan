//*****************************************************
//Q-1 : check sequence is sroted or not
#include <bits/stdc++.h>
using namespace std;
bool solve(int arr[], int n){
    //base case
    if(n==0 || n==1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        solve(arr+1, n-1);
    }
}
int main(){
    int arr[5] = {3, 5, 8, 8, 9};
    bool ans = solve(arr, 5);
    if(ans==true){
        cout<<"sorted "<<endl;
    }
    else{
        cout<<"Not sorted "<<endl;
    }
}