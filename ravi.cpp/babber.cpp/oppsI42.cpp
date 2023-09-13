// static keyword and static funtion 
#include<iostream>
#include<string.h>
using namespace std;
class hero{
    public:
    int health ;
    char level;
   static int timetocomplete ; // -> this is not a part of hero properties
   
   // static funtion 
   static int random(){
    return timetocomplete;
   }
};
int hero ::timetocomplete = 10;
int main(){
    cout<<hero::timetocomplete<<endl;
    cout<<hero::random()<<endl;

}