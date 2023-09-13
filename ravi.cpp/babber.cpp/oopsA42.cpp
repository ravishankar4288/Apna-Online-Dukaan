// -->> Basic of oops 

#include<iostream>
using namespace std;
class hero{
    public:
    int health ;
    char level;
};

// impty class 
class A {
    //properties


};

int main(){
 hero ravi ;
 ravi.health = 70;
 ravi.level= 'A';
 cout<<ravi.health <<endl;
 cout<<ravi.level <<endl;
 cout<<sizeof(ravi)<<endl;

cout<<endl;
A ramesh;
cout<<sizeof(ramesh)<<endl;
    
    
    

}