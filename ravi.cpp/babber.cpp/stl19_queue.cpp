#include<iostream>
#include<queue>

using namespace std ;
int main(){
queue<string> q;
q.push("ravi");
q.push("shankar");
q.push("kumar");
q.push("sah");
cout<<"before pop size of queue is : "<<q.size()<<endl;
cout<<"before pop first string of queue is : "<<q.front()<<endl;
cout<<"before pop last string of queue is : "<<q.back()<<endl;
cout<<endl;
q.pop();
cout<<"after pop size of queue is : "<<q.size()<<endl;
cout<<"after pop first string of queue is : "<<q.front()<<endl;
cout<<"after pop last string of queue is : "<<q.back()<<endl;

}