#include<iostream>
#include<queue>

using namespace std;
int main(){
// max heap
priority_queue<int> maxi;
maxi.push(6);
maxi.push(3);
maxi.push(0);
maxi.push(2);
maxi.push(7);
cout<<"before pop , queue is empty or not : "<<maxi.empty()<<endl;
cout<<"size of priority queue is : "<<maxi.size()<<endl;
int m = maxi.size();
for(int i = 0 ; i<m ; i++){
    cout<<maxi.top()<<" ";
    maxi.pop();
}cout<<endl;
cout<<"after pop , queue is empty or not : "<<maxi.empty()<<endl; 

cout<<endl;
cout<<endl;

// mini heap
priority_queue<int , vector<int> , greater<int> > mini;
mini.push(6);
mini.push(3);
mini.push(0);
mini.push(2);
mini.push(7);
cout<<"before pop , queue is empty or not : "<<mini.empty()<<endl;
cout<<"size of priority queue is : "<<mini.size()<<endl;
int n = mini.size();
for(int i = 0 ; i<n ; i++){
    cout<<mini.top()<<" ";
    mini.pop();
}cout<<endl;
cout<<"after pop , queue is empty or not : "<<mini.empty()<<endl; 

}