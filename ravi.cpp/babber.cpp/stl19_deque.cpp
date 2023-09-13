#include<iostream>
#include<deque>    // this is the dictionary of deque

using namespace std ;

int main(){
deque<int> d;
d.push_back(1);
d.push_back(2);
d.push_front(3);
d.push_front(4);
d.push_front(5);

cout<<"before pop element : "<<endl;
for(int i:d){
    cout<<i<<" ";
}cout<<endl;

d.pop_back();
d.pop_front();

cout<<"after pop element : "<<endl;
for(int i:d){
    cout<<i<<" ";
}cout<<endl;

deque<int> a ;
a.push_back(2);
a.push_back(4);
a.push_back(6);
a.push_front(3);
a.push_front(6);
a.push_front(9);

cout<<" element of 2nd index is ; "<<a.at(2)<<endl;
cout<<"first element is :  "<<a.front()<<endl;
cout<<"last element is : "<<a.back()<<endl;
cout<<"this deque is empty or not : "<<a.empty()<< endl;

cout<<endl;

cout<<"before erase, size of deque : "<<a.size()<<endl;
a.erase(a.begin() , a.begin() + 2);   // Here +2 means from begin two element delect
for(int i:a){
    cout<<i<<" ";
}cout<<endl;

a.erase(a.end() , a.end() + 2);  // Here +2 means from end two element delect
cout<<"after erase, size of deque : "<<a.size()<<endl;
for(int i:a){
    cout<<i<<" ";
}cout<<endl;
}