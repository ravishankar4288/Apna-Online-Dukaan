// Shallow and deep copy 
#include<iostream>
#include <string.h>
using namespace std;
class hero{
    public:
    int health;
    char level;
    char *name;

    // constructor 
    hero (){
        cout<<"apna constructor "<<endl;
        name = new char[100];
    }

    // parametrised construtor 
    hero (int health , char level  ){
        this ->health = health;
        this ->level = level;
 
    }
    void setname(char name[] ){
        strcpy(this ->name , name );
    }
    

    void print(){
        cout<<"[ Name : "<<this ->name<<", ";
        cout<<"health : "<<this ->health<<", ";
        cout<<"level : "<<this ->level<<" ]"<<endl;
    }
    // apna copy constructor = use for deep copy constructor 
    // if you wanted to use shallow copy than this portion to do comment out 
    hero (hero& temp ){
        char *ch = new char[strlen(temp.name ) + 1];
        strcpy(ch , temp.name );
        this -> name = ch ;
        this ->health = temp.health;
        this->level = temp.level;
    }
};
int main(){
    hero hero1;
    hero1.health = 20;
    hero1.level = 'D';
    char name[] = "Babbar";
    hero1.setname(name);
    hero1.print();

//default copy constructor = shallow copy
    hero hero2(hero1);
    hero2.print();

    hero1.name[0] ='G';
    hero1.print();
    hero2.print();
    

}