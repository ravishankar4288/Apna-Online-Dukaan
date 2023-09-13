#include<iostream>
using namespace std ;

// Question -->> bubble sorted 
void bubble_sort( int arr[] , int size ){
    for(int i = 0 ; i < size  ; i++ ){
        for( int j = 0 ; j < size - 1 ; j++){
            if(arr[j] > arr[j+1])
                swap(arr[j] , arr[j+1]);
            
        }
      
    }
    
}

int main(){
    int size ;
    cout<<"write the array of size "<<endl;
    cin>>size;
    int arr[10000];
    cout<<"write your array elements "<<endl;
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i];
    }

    cout<<"this is sorted array "<<endl;
    bubble_sort(arr , size);
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
}
}


//Q--> Bubble sort by recursion 

void bubbleSort(int arr[] , int size ){
 // base case 
 if(size == 0 || size == 1){
   return ;
 }
// processing 
for(int i = 0 ; i <size-1 ; i++){
  if(arr[i] > arr[i+1]){
   swap(arr[i] , arr[i+1]);
  }
}
// recursive relation 
bubbleSort(arr , size - 1);

}
int main(){
   int n ;
   cin>>n;
   int arr[100];
   for(int i = 0 ; i<n ; i++){
      cin>>arr[i];
   }

   bubbleSort(arr , n);
   for(int i = 0 ; i<n ; i++){
      cout<<arr[i]<<" ";
   }
}