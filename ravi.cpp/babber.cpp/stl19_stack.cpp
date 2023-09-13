#include<iostream>
#include<stack>

using namespace std;
int main() {
stack<string> s;
s.push("ravi");
s.push("shankar");
s.push("kumar");
s.push("sah");
cout<<"size of stack is : "<<s.size()<<endl;
cout<<"before pop , top of string is : "<<s.top()<<endl;

s.pop();
s.pop();
cout<<"after pop , top of string is : "<<s.top()<<endl;
cout<<"this stack is empty or not : "<<s.empty()<<endl;



}