#include<iostream>
using namespace std;
int main(){
    cout<<"Enter your number:"<<endl;
    int a;
    cin>>a;
    if (a<25){
        cout<<"This value is less than a:"<<endl;
    }
     else if (a==25){
         cout<<"This value is equal to a:"<<endl;

     }
     else{
         cout<<"This value is greater than a:"<<endl;
     }
    return 0;
    
}