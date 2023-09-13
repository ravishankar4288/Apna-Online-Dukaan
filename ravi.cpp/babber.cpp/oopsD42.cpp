// parametrised constructor 
#include<iostream>
using namespace std ;
class hero {
    public:
    int health ;
    char level ;
//apna constructor 
hero (){
    cout<<"without apna constructor any other constructor donot work "<<endl;
}

// parametrised constructor 
hero (int health){
    this -> health = health;
}

hero(int a , char b){
    this ->health = a;
    this ->level = b;
}

void print(){
    cout<<this->health<<endl;
    cout<<this->level<<endl;
}
};

int main(){
// staitically     
hero ravi(100);
cout<<ravi.health<<endl;
cout<<endl;

hero ramesh(80 , 'B');
cout<<ramesh.health<<endl;
cout<<ramesh.level<<endl;
cout<<endl;

// Dynamically 
hero *suresh = new hero(10 , 'c');
//suresh->health=10;
//suresh->level='c';
suresh->print();


}