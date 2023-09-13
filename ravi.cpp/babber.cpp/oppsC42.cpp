// Constructor 
#include<iostream>
using namespace std ;
class hero {
    public:
    int health ;
    char level ;

    hero(){
        cout<<"This is the apna Constructor"<<endl;
    }

};
int main(){
    // statically
    cout<<"Hii"<<endl;
    hero ravi;
    cout<<"hello"<<endl;

    // dynaically 
    //hero *ramesh = new hero;
    hero *ramesh = new hero();

    ravi.health = 50;
    cout<<ravi.health<<endl;

    ramesh->health = 40;
    cout<<ramesh->health<<endl;

}