//(ii): operator overloading 
#include<iostream>
using namespace std;
class A{
    public:
    int a , b;
    int add(){
        return (a+b);
    }
    
    //method-1
    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"output is : "<<value1 - value2<<endl;
    }
     
     
    //method-2
    void operator+ (A &obj){
        int value1 = this->a;
        int value2 = obj.b;
        cout<<"output : "<<value1*value2<<endl;
    }

    //(3)
    void operator+(A &obj){
        cout<<"Hello Ravishankar ! "<<endl;
    }

};
int main(){
    //(1)
    A obj1 , obj2;
    obj1.a = 10;
    obj2.a = 5;
    obj1 + obj2;

//(2)
A obj3, obj4;
obj3.a=20;
obj4.b=10;
obj3 + obj4;


//(3)
A obj1 , obj2;
obj1 + obj2;
}