#include<iostream>
using namespace std;
int main() {
    int a=100;     
    char b='c';
    float f=1.2;
    double d=1.234;
    bool bl= true;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<bl<<endl;
    cout<<endl;

    int size = sizeof(a);
    cout<<size<<endl;
    int size = sizeof(b);
    cout<<size<<endl;
    int size = sizeof(f);
     cout<<size<<endl;
    int size = sizeof(d);
     cout<<size<<endl;
    int size = sizeof(bl);
     cout<<size<<endl;

    int a = 'a';
    cout<<a<<endl;
    char ch = 98;
    cout<<ch<<endl;

    char b = 12345 ;  // Here give output a/c to Ascii table but last number
    cout <<b<<endl;

    int s = 100;
    cout <<s<<endl;
    unsigned int t = -100; // Because of unsigned
    cout<<t<<endl;

            //Operators
   // + , - , * , / , % ---> for remainder   

   int a =2/5;
   cout<<a<<endl;
   float b=2/5;   // here int/int = int
   cout <<b<<endl;   
   float c= 2.0/5; //here float/int = float , double/int = double
   cout<<c<<endl;  

       // Relational Operators
  /*     ==  -->equaltiy
       >
       <
       >=
       <=
       !=  ---> not equality    */

int a = 5;
int b = 6;
 bool first = (a==b);
 cout<<first<<endl; 

 bool second = (a> b);
 cout<<second<<endl; 

 bool third = (a<b);
 cout<<third<<endl; 

 bool fourth = (a>=b);
 cout<<fourth<<endl; 

 bool fifth = (a<=b);
 cout<<fifth<<endl; 

 bool sixth = (a!=b);
 cout<<sixth<<endl; 


    //Logical Operators
      
 /*   && --> and
      || --> or
      !  --> not
      =  --> assign operator    */

      int a =100;       //here output is 0
      cout<<!a<<endl;
      int b=0;          // and here output is 1
      cout<<!b<<endl;
      

}