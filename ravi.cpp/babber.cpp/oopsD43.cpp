//(3):Multiple Inheriment 
#include<iostream>
#include<string.h>
using namespace std;
class animal{
    public:
    int age;
};

class tiger{
    public:
    char color;
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

}