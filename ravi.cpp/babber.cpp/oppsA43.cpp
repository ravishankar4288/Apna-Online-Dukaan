// Inheritance 
#include<iostream>
#include<string.h>
using namespace std;
class human{
    public:
    int weight;
    int age;
    int height;

};

class male : public human{
    public:
    char color;
// contructor
male (){

}
// parametrised constructor 
male (int a , int b , int c , char d){
    this ->age = a;
    this ->height = b;
    this ->weight = c;
    this ->color = d;
}

void print(){
    cout<<"weight : "<<weight<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"height : "<<height<<endl;
    cout<<"color : " <<color<<endl;
}


};
int main(){
    male obj1;
    obj1.age = 20;
    obj1.height = 6;
    obj1.weight = 70;
    obj1.color = 'R';

    cout<<obj1.color<<endl;
    cout<<obj1.weight<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.age<<endl;

    cout<<endl;
    male m1(65,15,5,'G');
    m1.print();



}