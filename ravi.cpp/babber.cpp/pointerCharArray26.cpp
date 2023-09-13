#include<iostream>
using namespace std;


int main(){
    // Character Array 
char ch[6] = "abcde" ;
cout<< ch <<endl;    // this give all string abcde

char *ptr = &ch[0] ;
cout<<ptr<<endl;      // this is also give abcde

cout<<endl;
cout<<*ptr<<endl;     // but this output is a
cout<<*(ptr + 1)<<endl; 
cout<<*(ptr + 2)<<endl; 

cout<<endl;
ptr++;
cout<<"ptr++ : "<<ptr<<endl;


// If you want to know ASCII value given char than you knoe this way
cout<<endl;
cout<<(*ptr) + 0 <<endl;  
cout<<(*ptr) + 1 <<endl; 
cout<<(*ptr) + 2 <<endl; 

char temp = 'z'  ;
char *p = &temp;
cout<<p<<endl;   // Here this give anything after z jab tak null char na mile 
}

/*

// function in pointer 
void print(int *p){   
    *p = *p + 1;
    cout<<*p<<endl;
}

void printAddress(int *p){
    p = p + 1;
    cout<<p<<endl;
}

int  printSum(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i<n ; i++){
      sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int num = 10;
    int *p = &num;
     cout<<"before value of num : "<<*p<<endl;
    print(p);
    cout<<"after value  of num : "<<*p<<endl;

    cout<<endl;

    cout<<"before address of num : "<<p<<endl;
    printAddress(p);
    cout<<"after address of num : "<<p<<endl;

    cout<<endl;

    int arr[5] = {2,4,6,8,10};
    int ans = printSum(arr , 5);
    cout<<"sum of arr element number : "<<printSum(arr , 5)<<endl;
    cout<<"sum of arr last 4 element number : "<<printSum(arr+3, 2)<<endl;
}
*/




    
