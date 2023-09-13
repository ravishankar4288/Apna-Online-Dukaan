// implement circular linked list 
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    //constructor 
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
    // destructor 
    ~Node(){
        int value = this ->data;
        if(this ->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data : "<<value<<endl;
    }
};

// insert a number
void insertATposition(Node* &tail, int element , int d){
    Node* curr = tail;
    Node* forward = NULL;
    //for empty case
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp ->next = temp;
    }
    // else if(tail ->next == NULL){    // this the optional
    //     Node* temp = new Node(d);
    //     forward = curr ->next;
    //     curr ->next = temp;
    //     temp ->next = forward;
    // }
    else{
        while(curr ->data != element){
            curr = curr ->next;  
        }
        Node* temp = new Node(d);
        forward = curr ->next;
        curr ->next = temp;
        temp ->next = forward;
    }
}
// printing 
void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<tail->data<<" ";
        tail = tail ->next;
    }
    while(tail !=temp);
    cout<<endl;
}

int main(){
    Node* tail = NULL;
    Node* head = NULL;
    insertATposition(tail,0,10);
    print(tail);
    insertATposition(tail ,10,20);
    print(tail);
    insertATposition(tail,20,30);
    print(tail);
    insertATposition(tail,20,25);
    print(tail);
    insertATposition(tail,10,0);
    print(tail);

    
}
