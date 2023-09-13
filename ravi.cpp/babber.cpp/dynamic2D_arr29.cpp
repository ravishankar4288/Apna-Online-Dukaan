#include<iostream>
using namespace std ;
int main(){
    /*
    //create a 2d array by dynamically of order n*n
    int n;
    cout<<"Enter the order of determenant : "<<endl;
    cin>>n;

    //create dynamic 2d aray 
    int **arr = new int* [n];
    for(int i = 0 ; i < n ; i++){
        arr[i] = new int [n];
    }

    // taking input 
    cout<<"Enter element of 2d array : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>arr[i][j];
        }
    }

    // taking output 
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }   */


    //create a 2d array by dynamically of order m*n
    int row;
    cout<<"Enter the order of row : "<<endl;
    cin>>row;

    int col;
    cout<<"Enter the order of col : "<<endl;
    cin>>col;

    //create dynamic 2d aray 
    int **arr = new int* [row];
    for(int i = 0 ; i < col ; i++){
        arr[i] = new int [row];
    }

    // taking input 
    cout<<"Enter element of 2d array : "<<endl;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cin>>arr[i][j];
        }
    }

    // taking output 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // releas memory 
    for(int i = 0 ; i < row ; i++){
        delete [] arr[i];
        delete [] arr;
    }
}
