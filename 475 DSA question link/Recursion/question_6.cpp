//*****************************************************
//Q-1 : apply linear search on int array using recursion
#include <bits/stdc++.h> 
using namespace std;
bool solve(int arr[], int n, int target){
    //base case
    if(n==0){
        return false;
    }
    if(arr[0] == target){
        return true;
    }
    else{
        solve(arr+1, n-1, target);
    }

}
int main(){
    int arr[5] = {2, 4, 6, 8, 9};
    int target = 7;
    bool ans = solve(arr, 5, target);

    if(ans == true){
        cout<<"data is present "<<endl;
    }
    else{
        cout<<"Not present "<<endl;
    }
    
}
