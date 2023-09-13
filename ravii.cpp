#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currMax=10,maxPoint=10;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            currMax += 10;
        }
        else{
            currMax = 10;
        }
        if(currMax>maxPoint){
            maxPoint = currMax;
        }
    }
    cout<<maxPoint;
    return 0;
}