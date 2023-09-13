// code for insert at any position 
#include<iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node* next;
    //con
    Node (int data){
        this ->data = data;
        this ->next =NULL;
    }
};
// insert at head side
void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

//insert at tail side 
void inserAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = tail ->next;
}
//inser node at any position
void inserAtPosition(Node* &tail ,Node* &head , int position , int d){
     //code for 1st position
    if(position == 1){
        insertAtHead(head,d);
       return ;
    }
    Node* temp = head;
    int count = 1;
    while(count<position - 1 ){
        temp = temp ->next;
        count++;
    }
    //create a node
    Node* nodeToinsert = new Node(d);
    nodeToinsert ->next = temp ->next;
    temp ->next = nodeToinsert;

    // code for last position 
    if(temp->next == NULL){
        inserAtTail(tail,d);
      return;
    }
}

// print new node
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    inserAtTail(tail,20);
    print(head);
    inserAtTail(tail,40);
    print(head);
    inserAtTail(tail,50);
    inserAtPosition(tail,head, 3, 30);
    print(head);
    inserAtPosition(tail,head, 1, 0);
    print(head);
    inserAtPosition(tail,head, 7, 60);
    print(head);

}