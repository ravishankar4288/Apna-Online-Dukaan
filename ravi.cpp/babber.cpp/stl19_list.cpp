#include<iostream>
#include<list>  // this is the libreary of list

using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);
    l.push_front(10);
    l.push_front(15);
cout<<"before pop element  : "<<endl;
    for(int i : l){
        cout<<i<<" ";
    }cout<<endl;

cout<<endl;

l.pop_back();
l.pop_back();
l.pop_front();
cout<<"after pop element : "<<endl;
for(int i : l){
    cout<<i<<" ";
}cout<<endl;

cout<<endl;

list<int> a(5,1) ;   // Its means  size is 5 and all element in list is 1 
for(int i : a){
    cout<<i<<" ";
}cout<<endl;

list<int> b;
b.push_back(1);
b.push_back(2);
b.push_back(3);
b.push_front(4);
b.push_front(5);
b.push_front(6);

cout<<"first element of list is : "<<b.front() << endl;
cout<<"last element of list is : "<<b.back()<<endl;
cout<<"size of list is : "<<b.size()<<endl;

cout<<endl;

cout<<"before erase of some element of list : "<<endl;
for(int i : b){
    cout<<i<<" ";
}cout<<endl;

cout<<"after erase of some element of list : "<<endl;
b.erase(b.begin() );
// b.erase(b.end() );  // this is not possible in list
for(int i : b){
    cout<<i<<" ";
}cout<<endl;
}