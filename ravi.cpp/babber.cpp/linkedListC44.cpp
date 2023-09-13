// code for insert at tail side
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
//constructor 
Node(int data){
    this ->data = data;
    this ->next =NULL;
}
};
void inserAtTail(Node* &tail , int d){
    //create a node 
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;       // tail = tail ->next both are same
}
//print new node
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;  
    }
    cout<<endl;
}
int main(){
    //create a new node
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head) ;
    inserAtTail(tail , 20);
    print(head);
    inserAtTail(tail , 30);
    print(head);
    inserAtTail(tail , 40);
    print(head);
    inserAtTail(tail , 50);
    print(head);
    
    return 0;
}