//(6):Inheriment Ambiguity
#include<iostream>
#include<string.h>
using namespace std;
class animal{
    public:
    int age;
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class tiger{
    public:
    char color;
    void speak(){
        cout<<"dharata hai "<<endl;
    }
};

class cat: public animal , public tiger{
    public:
    string sound;

    cat(){

    }
    // parametrised constructor 
    cat (int a , char b , string c){
      this ->age = a;
      this ->color = b;
      this ->sound = c;
    }

    void print(){
        cout<<"age : "<<age<<endl;
        cout<<"color : "<<color<<endl;
        cout<<"sound : "<<sound<<endl;
    }
};

int main(){
    cat c1(2,'Y',"maiaaau");
    c1.print();

    c1.animal::speak();
    c1.tiger::speak();

}