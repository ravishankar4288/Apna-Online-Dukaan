#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* pre;
    Node* next;

 // constructor
 Node(int data){
    this -> data = data;
    this -> pre = NULL;
    this -> next = NULL;
 }
};

void print(Node* head){
    Node* temp = head;

    while( temp != NULL ){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getlenth(Node* head){
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }

    return len;
}

void insertAthead(Node* &head, int data){
     Node* temp = new Node(data);
     temp -> next = head;
     head -> pre = temp ;
     head = temp;
}

void insertAtTail(Node* &tail, int data){
     Node* temp = new Node(data);
     tail -> next = temp;
     temp -> pre = tail ;
     tail = temp;
}



int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print (head);

cout<<getlenth(head)<<endl;

insertAthead(head , 12);
    print(head);
    
 insertAtTail(tail , 15);
    print(head);


    
  
}