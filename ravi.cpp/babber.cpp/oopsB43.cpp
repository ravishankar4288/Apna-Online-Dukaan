// Types of Inheriment -> (1) Single Inheriment  
#include<iostream>
#include<string.h>
using namespace std;
class human{
    public:
    int weight ;
    int age;
};

class male: public human{
    public:
    int height;

    // apna constructor 
    male (){

    }
// parametrised contructor 
male (int a , int b , int c){
    this ->weight = a;
    this ->age = b ;
    this ->height = c;
}

void print(){
    cout<<"weight : "<<weight<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"height "<<height<<endl;
}
};
int main(){
    male m1(50 , 16 ,4 );
    m1.print();

}