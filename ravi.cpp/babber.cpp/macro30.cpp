#include<iostream>
using namespace std ;

/*
//       MACRO

//#define pi 3.14
//repleace value of pi with 3.57
#define pi 5.7

int main(){
    int r = 5;
    int h = 7;
    double area_of_circul = pi*r*r;
    double voulme_of_cellender = pi*r*r*h;
    cout<<area_of_circul<<endl;
    cout<<voulme_of_cellender<<endl;

}     */


/*
// LOCAL Variable and Global Variable 
int main(){
    int a = 5;   // Here a and  b is globale variable 
    int b = 10;

    {
        int c = 20;
        cout<<"inside : "<<a<<endl;
        cout<<"inside : "<<b<<endl;
        cout<<"inside : "<<c<<endl;
    }
    cout<<"outside : "<<a<<endl;
    cout<<"outside : "<<b<<endl;
    //cout<<"outside : "<<c<<endl;  Here c is not valid beacuse is local variable 

}     */


/*
// inline function 
inline int getmax(int& a , int& b ){
    int  ans = (a>b) ? a : b;
    return ans ;
   
}
int main(){
int a = 10;
int b = 20;
int ans ;
ans = getmax(a, b);
cout<<ans <<endl;

a = a + 30;
b = b + 10;
ans = getmax(a, b);
cout<<ans <<endl;
}                    */


// Default Argument 
void printZero(int arr[] , int n , int start ){
    for(int i = start ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void printOptional(int arr[] , int n , int start = 0 ){
    for(int i = start ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

void print_endingOptional(int arr[] , int n = 0 , int start = 0 ){
    for(int i = start ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

// But here only ending point optional is not possibe this series
void printOptional_ending(int arr[] , int start , int n = 0){   // This is not correct ans for default argument 
    for(int i = start ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6] = {2,4,6,8,10,12};
    printZero(arr , 6 , 2);

    cout<<endl;
    printOptional(arr , 6);

    cout<<endl;
    print_endingOptional(arr , 4 , 2);

    cout<<endl;
    printOptional_ending(arr , 3  );


}