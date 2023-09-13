#include<iostream>
using namespace std;

bool search(int num[] , int n , int key){
    for(int i = 0 ; i<n ; i++){
        if (num[i] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int num[10] = {1 ,2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 0 };
    int key ;
    cout<<" search your number :"<<endl;
    cin>>key;

bool found = search(num , 10 , key );
if (found ){
    cout<<"this number is belongs to array :"<<endl;
}
else{
    cout<<"this number is not belongs to array :"<<endl;
}
}



//reverse array
int main(){
    int size ;
    cout<<"select size of array :"<<endl;
    cin>>size;
    cout<<"please write your number :"<<endl;
    int num[1000];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

    for(int i = (size - 1) ; i >= 0 ; i--){
        cout<< num[i] <<" ";
    }
 }

// reverse code  
int main(){
    int num[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 0};
    for(int i = 9; i >= 0 ; i--){
        cout<<num[i]<<" ";
    }
}