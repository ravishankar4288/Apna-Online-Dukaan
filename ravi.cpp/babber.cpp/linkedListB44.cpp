// code for insertionAthead side 
#include<iostream>
#include<string.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor 
    Node (int data){
        this ->data = data;
        this ->next = NULL;
    } 
};

// add a node from head side 
    void insertAtHead(Node* &head , int d){
        // create a new node 
        Node* temp = new Node(d);
        temp ->next = head;
        head = temp;
    } 
    //print the all node
    void print(Node* &head){
       Node* temp = head;
       while(temp != NULL){
           cout<<temp ->data<<" ";
           temp = temp ->next;
       }
       cout<<endl;
    }
int main(){
    // create a new node 
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,15);
    print(head);
    
    insertAtHead(head,20);
    print(head);
    return 0;
}