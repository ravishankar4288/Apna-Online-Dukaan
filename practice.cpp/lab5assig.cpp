#include <bits/stdc++.h>
using namespace std;

void square(int *arr , int n){
  int k =0;
  for(int k =0 ; k<n;k++){
    if(arr[k]>=0){
      break;
    }
  }
  int i = k-1;
  int j = k;
  int ind  = 0;
  int temp[n];
  while(i>=0 && j<n){
    if(arr[i]*arr[i]<arr[j]*arr[j]){
      temp[ind] = arr[i]*arr[i];
      i--;
    }
    else{
      temp[ind]=arr[j]*arr[j];
      j++;
    }
    ind++;
  }
  while(i>=0){
    temp[ind] = arr[i]*arr[i];
    i--;
    ind++;
  }
  while(j<n){
    temp[ind] = arr[j]*arr[j];
    j++;
    ind++;
  }
  for(int  i=0;i<n;i++){
    cout << temp[i]<<" ";
  }
}

int main()
{
    int arr[] = { -6, -3, -1, 2, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Before sort " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    square(arr, n);
 
    cout << "\nAfter Sort " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}