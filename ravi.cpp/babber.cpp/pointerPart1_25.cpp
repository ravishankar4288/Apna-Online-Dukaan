#include<iostream>
using namespace std ;
int main(){
    /*
    int num  = 10;
    cout<<num<<endl;

    // Find address of num --> &num
    cout<<"address of num is "<<&num <<endl;

    int *ptr = &num;   

    // Here both( &num  and  ptr ) give address of num 
    cout<<"address of num is "<<&num <<endl;
    cout<<"address of num is "<<ptr <<endl;

    //Here both( num  and  *ptr) give value of num
    cout<<"value of num is  "<<*ptr <<endl;
    cout<<num<<endl;
    cout<<"size of num is "<<sizeof(num)<<endl;
    cout<<"size of pointer ptr is "<<sizeof(ptr)<<endl;

    cout<<endl;


    double d = 4.25;
    double *p1 = &d;
    cout<<"address of d is "<<p1 <<endl;
    cout<<"value of d is  "<<*p1 <<endl;
    cout<<"size of d is "<<sizeof(d)<<endl;
    cout<<"size of pointer p1 is "<<sizeof(p1)<<endl;

    cout<<endl;

    char c = 'z' ;
    char *p2 = &c;
    cout<<"address of c is "<<p2 <<endl;
    cout<<"value of c is  "<<*p2<<endl;
    cout<<"size of c is "<<sizeof(c)<<endl;
    cout<<"size of pointer p2 is "<<sizeof(p2)<<endl;

*/
    cout<<endl;
    cout<<endl;

    /*
//pointer to int is created , and pointing to some garbage address   
    // int *p ;
    // cout<<*p<<endl;
    // int *q = 0;   // output is nothing 
    // cout<<*q<<endl;

    int i = 5;
    int *r = &i;
    cout<<"address of i is "<<r<<endl;
    cout<<"value  of i is "<<*r<<endl;

    int *s = 0;
    s = &i;
    cout<<"address of i is "<<s<<endl;
    cout<<"value  of i is "<<*s<<endl;

    */


/*
   int num = 5 ;
   int a = num ;
   cout<<"before increas a : "<<num<<endl;
   a++;
   cout<<"after increas a : "<<num<<endl;

   cout<<endl;

   int *t = &num;
   int b = *t;
   cout<<"before increas b : "<<num<<endl;
   b++;
   cout<<"after increas b : "<<num<<endl;

   cout<<endl;

   int *ts = &num;
   cout<<"before increas *ts : "<<num<<endl;
   (*ts)++;
   cout<<"after increas *ts : "<<num<<endl;


   */

  /*

// copy of pointer 
int u = 10 ;
int *v = &u;
int *w =  v;
cout<<"address of w : "<<w<<" and "<<"address of v : "<<v<<endl;
cout<<"value of w : "<<*w<<" and "<<"value of v : "<<*v<<endl;

*/

// pointer arithmetic addition 
int x = 20;
int *y = &x;
cout<<"value of x before addition "<<*y <<endl;
(*y)++;
cout<<"value of x after addition "<< *y<<endl;

cout<<endl;

cout<<"address of x before addition "<<y <<endl;
y++;
cout<<"address of x after addition "<< y<<endl;

}
