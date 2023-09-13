// *********** Vector *****************
#include<iostream>
#include<vector>   // this using for STL vector
using namespace std ; 

int main() {
vector<int> v;
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl;

v.push_back(1);
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl; 

v.push_back(2);
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl; 

v.push_back(3);
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl; 

v.push_back(4);
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl; 

v.push_back(5);
cout<<"capacity-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<endl; 

cout<<"element of 2nd index is : "<<v.at(2)<<endl;
cout<<"array is empty or not : "<<v.empty()<<endl;
cout<<"first element of array is : "<< v.front()<<endl;
cout<<"last element of array is : "<<v.back()<<endl;

cout<<endl;

cout<<"before pop"<<endl;
for(int i : v){
    cout<<i<<" ";
}
cout<<endl;

cout<<endl;

v.pop_back();

cout<<"after pop"<<endl;
for(int i : v){
    cout<<i<<" ";
}
cout<<endl;

cout<<endl;

cout<<"before clear size : "<<v.size()<<endl;
cout<<"before clear capacity : "<<v.capacity()<<endl;
v.clear();
cout<<"after clear size : "<<v.size()<<endl;
cout<<"after clear capacity : "<<v.capacity()<<endl;

cout<<endl;

vector <int> a(5,2) ; // Here 5-> it means size of vector and 
                      // 2 -> it means every element of vector is 2
cout<<"print vector a : "<<endl;
for(int i:a) {
cout<<i<<" ";
}      cout<<endl;

vector<int> last(a);    // Here vector 'a' is copy in vector 'last'
cout<<"last element of vector : "<<endl;
for(int i:last){
cout<<i<<endl;
}

cout<<"size of last vector is ; "<<last.size()<<endl; 
}