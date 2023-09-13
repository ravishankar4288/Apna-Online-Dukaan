// --->> How to private properties access
#include<iostream>
using namespace std; 
class hero {
    private: // ye likhna optional hota hai
    int health ;
    char level ;

    public:
    int gethealth(int a){
        return a;
    }
    void sethealth(int a){
        health = a;
    }
    char getlevel(char b){
        return b;
    }
    void setlevel(char b){
        level = b;
    }
};
int main(){
    // static allocation 
    hero ravi;
    ravi.sethealth(70);
    ravi.setlevel('A');
    cout<<ravi.gethealth(70)<<endl;
    cout<<ravi.getlevel('A')<<endl;
    cout<<endl;

// Dynamic allocation 
hero *ramesh = new hero;

cout<<ramesh->gethealth(50)<<endl;
cout<<ramesh->getlevel('B')<<endl;
cout<<endl;

cout<<(*ramesh).gethealth(70)<<endl;
cout<<(*ramesh).getlevel('A')<<endl;

}