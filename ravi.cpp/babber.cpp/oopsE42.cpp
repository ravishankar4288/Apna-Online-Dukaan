// copy constructor 
#include<iostream>
using namespace std;
class hero {
    public:
    int health ;
    char level ;
    // constructor 
    hero (){
        cout<<"apna constructor "<<endl;
    }

    // parametric constructor 
    hero (int a , char b){
        this ->health = a;
        this ->level = b;
    }

    // apna copy constructor 
    hero (hero& temp ){
        cout<<"ye apna copy contructor se copy rha hai "<<endl;
        this ->health = temp.health;
        this ->level = temp.level;
    }

    void print(){
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }


};
int main(){
    hero ravi(10,'a');
    ravi.print();

    cout<<endl;
    hero ramesh(ravi);
    ramesh.print();


}