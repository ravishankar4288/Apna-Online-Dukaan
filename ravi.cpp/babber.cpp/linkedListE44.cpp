// code for delete node
#include<iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node* next;
    //conntructor 
    Node (int data){
        this ->data = data;
        this ->next =NULL;
    }
//destructor
~Node (){
    int value = this ->data;
    if(this ->next != NULL){
        delete next;
        this ->next = NULL;
    }
    cout<<"memory is free for node with data "<<value<<endl;
}

};
// insert at head side
void insertAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp ->next = head;
    head = temp;
}

//insert at tail side 
void insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}
//inser node at any position
void insertAtPosition(Node* &tail ,Node* &head , int position , int d){
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
        insertAtTail(tail,d);
      return;
    }
}
//code for deletion 
void deleteNode(Node* &head , int position ){
    //for 1st position 
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp ->next = NULL;
        delete temp;
    }
    else{
    //for any position including last
    Node* curr = head;
    Node* pre = NULL;
    int count = 1;
    while(count < position  ){
        pre = curr;
        curr = curr ->next;
        count++;
    }
    pre ->next = curr ->next;
    curr ->next = NULL;
    delete curr;
}
}
// print new node
void print(Node* &head , Node* &tail ){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
    // cout<<"head "<<head->data<<endl;
    // cout<<"tail "<<tail->data<<endl;
    // cout<<endl;
    
}


int main(){
     Node* node1 = new Node(10); 
    Node* head = node1;
    Node* tail = node1;
    print(head,tail);
    insertAtTail(tail,20);
    print(head,tail);
    insertAtPosition(tail,head, 3, 30);
    print(head,tail);
    insertAtPosition(tail,head, 1, 0);
    print(head,tail);

// deleteNode(head,4);
// print(head,tail);
   
    return 0;
}