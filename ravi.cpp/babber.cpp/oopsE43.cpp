//(4): Hierarchical Inheriment 
#include<iostream>
#include<string.h>
using namespace std;
class animal{
    public:
    int age;
};

class dog{
    public:
    int legs ;
};

class tiger: public animal , public dog{
    public:
    char color;
    tiger(){

    }
    // parametrised constructor 
    tiger (int a , char b , int c){
      this ->age = a;
      this ->color = b;
      this ->legs = c;
    
    }

    void print1(){
        cout<<"tiger age : "<<age<<endl;
        cout<<"tiger color : "<<color<<endl;
        cout<<"tiger legs : "<<legs<<endl;
       
    }
};

class cat: public animal{
    public:
    string sound;

    cat(){

    }
    // parametrised constructor 
    cat (int a, string b){
      this ->age = a;
      this ->sound = b;
    }

    void print2(){
        cout<<"cat age : "<<age<<endl;
        cout<<"cat sound : "<<sound<<endl;
    }
};

int main(){
    tiger t1(20,'y',4);
    t1.print1();

    cout<<endl;
    cat c1(2 , "maiaaau");
    c1.print2();

}