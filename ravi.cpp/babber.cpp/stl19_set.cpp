#include<iostream>
#include<set>

using namespace std;
int main(){
set<int> s;     // output of set is always sorting order
s.insert(1);
s.insert(9);
s.insert(4);
s.insert(7);
s.insert(7);
s.insert(1);
s.insert(5);
s.insert(5);
s.insert(3);
cout<<"before erase , size of set is : "<<s.size()<<endl;
cout<<"5 is present or not : "<<s.count(5)<<endl;
cout<<"-5 is present or not : "<<s.count(-5)<<endl;
for(auto i : s){
    cout<<i<<" ";
}cout<<endl;

cout<<endl;

s.erase(1);
s.erase(7);
cout<<"after erase , size of set is : "<<s.size()<<endl;
for(auto i : s){
    cout<<i<<" ";
}cout<<endl;

cout<<endl;

set<int>::iterator it = s.begin();   // delect element 2nd no from start
it++;
s.erase(it);
set<int>::iterator itt = s.end();   // delect element 2nd no from end
itt--;
s.erase(itt);
for(auto i : s){
    cout<<i<<" ";
}cout<<endl;



}
