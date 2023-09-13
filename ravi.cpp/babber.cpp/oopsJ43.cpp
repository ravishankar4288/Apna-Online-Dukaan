//(2): Run-time polymorphism
#include<iostream>
#include<string.h>
using namespace std;
class Animal{
    public:
    void speak(string name){
        cout<<"speaking "<<endl;
    }  
};

class dog : public Animal{
    public:
    void speak(){
        cout<<"Barking "<<endl;
    }
};
int main(){
    dog obj1;
    obj1.speak();

}