// Implemente doubly link list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* pre ;
    Node* next;
    //constructor 
    Node(int data){
        this ->data = data ;
        this ->next = NULL;
        this ->pre = NULL;
    }
    //destructor 
    ~Node(){
        int value = this ->data;
        if(this ->next == NULL){
            delete next ;
            next = NULL;
        }
     cout<<"memory free for  node with data "<<value<<endl;   
    }
     
};
// code print code
    void print(Node* &head , Node* &tail){
       Node* temp = head;
       while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
       }
       cout<<endl;
       cout<<"head : "<<head->data<<endl;
       cout<<"tail : "<<tail->data<<endl;
       cout<<endl;
    } 

    // code for find number of node
    int getcount(Node* &head){
        Node* temp = head;
        int len = 0;
        while(temp != NULL){
            len++;
            temp = temp->next;
        }
        return len;
       
    }
// code for insert a node by head
void insertAtHead( Node* &head, Node* &tail, int d) {
        if(head == NULL){
            Node* temp = new Node(d);
            head = temp ;
            tail = temp;
        }
        else{
        Node* temp = new Node(d);
        temp -> next = head;
        head -> pre = temp;
        head = temp;
    }
}
// code for insert a node by tail
void insertAtTail(Node* &tail , Node* &head , int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail ->next = temp;
    temp ->pre = tail;
    tail = temp;
}
}

// code for insert a node at any position 
void insertAtposition(Node* &head , Node* &tail , int position , int d){
    // insert at start
    if(position == 1){
        insertAtHead(head , tail ,  d);
        return ;
    }

    Node* temp = head;
    int count = 1;
    while(count < position - 1){
        temp = temp->next;
        count++;
    }

    //insert at last 
    if(temp ->next == NULL){
        insertAtTail(tail , head, d);
        return ;
    }

    // insert at any position
    Node* insertTonode = new Node(d);
    insertTonode ->next = temp ->next;
    temp ->next ->pre = insertTonode;
    temp ->next = insertTonode;
    insertTonode ->pre = temp;

}
void deleteNode(Node* &head , int position ){
    if(position == 1){
        Node* temp = head;
        temp ->next ->pre = NULL;
        head = temp ->next;
        temp ->next = NULL;
        delete temp;
    }
    else{
        Node* pre = NULL;
        Node* curr = head;
        int count = 1;
        while(count < position  ){
            pre = curr;
            curr = curr ->next;
            count++;
        }
        // code for deletion for any position 
        // pre ->next = curr ->next;
        // curr ->next ->pre = curr ->pre;
        // curr ->next = NULL;
        // curr ->pre = NULL;
        curr ->pre =NULL;
        pre ->next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
}

int main(){
    Node* node1 = new Node(10);
     Node* head = node1;
     Node* tail = node1;
    print(head,tail);
    insertAtHead(head, tail ,20);
    print(head,tail);
    insertAtHead( head,tail ,30);
    print(head,tail);
    insertAtHead( head,tail,40);
    print(head,tail);
    insertAtTail(tail,head,50);
    print(head,tail);
    insertAtposition(head , tail ,6,70);
    print(head,tail);
    insertAtposition(head , tail ,1,0);
    print(head,tail);
    deleteNode(head,1);
    print(head,tail);
   deleteNode(head,6);
    print(head,tail);
    // int len = getcount( head);
    // cout<<"length of doubly LL : "<<len<<endl;
    
    return 0;
}
