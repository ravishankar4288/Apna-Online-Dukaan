//Types of (1)compile time polymorphism 
//(i):function overloading 
#include<iostream>
#include<string.h>
using namespace std;
class A{
    public:
    void sayhello(){
        cout<<"Hi I am ravishankar "<<endl;
    }
    void sayhello(int a){
        cout<<"I am belongs to Bihar "<<endl;
    }
    int sayhello(char name){
        cout<<"To kaise hai aaplog "<<endl;
    }
    int sayhello(string name){
        cout<<"sab badiya ba nu "<<endl;
    }

};
int main(){
    A object;
    object.sayhello();
    object.sayhello(1);
    object.sayhello('R');
    object.sayhello("hiii");

}
