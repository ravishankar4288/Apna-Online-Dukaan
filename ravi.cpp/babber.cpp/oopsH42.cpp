// Destructor -> jo memory ko free karta hai 
#include<iostream>
#include<string.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    // apna constructor 
    hero(){
        cout<<"This the apna constructor "<<endl;
    }

    // apna destructor 
    ~hero (){
        cout<<"This the apna destructor "<<endl;
    }
};
int main(){
    // statically allocation 
    hero hero1;
     
    // Dynamically allocaion
    hero *hero2  = new hero;
    delete hero2;   // -> manually destructor call
}