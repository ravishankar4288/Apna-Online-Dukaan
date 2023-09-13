//copy Assignment operator 
#include<iostream>
#include <string.h>
using namespace std;
class hero {
    public:
    int health;
    char level;

/* this is optional
// apna constructor 
hero(){

}

// parametrised constructor 
hero (int health , char level){
  this ->health = health ;
  this ->level = level ;
} */

void print(){
    cout<<health<<endl;
    cout<<level<<endl;
    cout<<endl;
}

};
int main(){
    hero hero1 ;
    hero1.health = 10 ;
    hero1.level = 'A';
    hero1.print();

    hero hero2;
    hero2.health = 20 ;
    hero2.level = 'B';
    hero2.print();

// copy Assignment operator 
hero1 = hero2 ;
hero1.print();
hero2.print();

  
}
