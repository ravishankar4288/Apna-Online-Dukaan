#include<iostream>
using namespace std;
/*
int main(){
    int num = 10;
    int *p = &num;
    int **p2 = &p;
    cout<<"value of num : "<<num<<endl;
    cout<<"value of num with the help of pointer : "<<*p<<endl;
    cout<<"value of num with the help of double pointer : "<<**p2<<endl;

    cout<<endl;
    cout<<"address of num  : "<<&num<<endl;
    cout<<"address of num  : "<<p<<endl; 
    cout<<"address of num  : "<<*p2<<endl; 

    cout<<endl;
    cout<<"address of num p : "<<&p<<endl;
    cout<<"address of num p : "<<p2<<endl;
    }
    */

   // function in double pointer 
   void update(int **ptr2){
    ptr2 = ptr2 + 1;      // no change
    *ptr2 = *ptr2 + 1;    // change 
    **ptr2 = **ptr2 + 1;  // change
   }
   int main(){
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;
    
    cout<<"before "<<i<<endl;
    cout<<"before "<<ptr<<endl;
    cout<<"before "<<ptr2<<endl;
    
    cout<<endl;
    update(ptr2);

    cout<<"after "<<i<<endl;
    cout<<"after "<<ptr<<endl;
    cout<<"after "<<ptr2<<endl;
   }
