//clone problem
#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    //constructor 
    Node(int data){
        this ->data = data;
        this ->next = NULL;
        this ->random = NULL;
    }
};

/*
// method-1 : T.C -> (N) and S.C ->(N)
void insertAtTail(Node* &head , Node* &tail , int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
       tail ->next = temp;
       tail = temp;
    }
}
Node* copylist(Node* head){
    //step-1 : create clone list
    Node* cloneHead = NULL;
    Node* cloneTail = NULL;
    Node* temp = head;
    while(temp != NULL){
        insertAtTail(cloneHead , cloneTail , temp ->data);
        temp = temp->next;
    }
    //step-2 : create map
    map<Node* , Node*> oldTonewNode;
    Node* cloneNode = cloneHead;
    Node* orignalNode = head;
    while(orignalNode != NULL){
        oldTonewNode[orignalNode] = cloneNode;
        orignalNode = orignalNode ->next;
    }

    cloneNode = cloneHead;
    orignalNode = head;
    while(orignalNode != NULL ){
        cloneNode ->random = oldTonewNode[orignalNode ->random];
        orignalNode = orignalNode ->next;
        cloneNode = cloneNode ->next;
    }
    return cloneHead;
    
}  */



//*************************************************************************************************************************
// method -2 : T.C ->(N) , S.C ->(1)
void insertAtTail(Node* &head , Node* &tail , int d){
    Node* temp = new Node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail ->next = temp;
        tail = temp;
    }
}
Node* copyList(Node* head){
// step-1 : create clone Node  
Node* cloneHead = NULL;
Node* clonetail = NULL;
Node* temp = head;
while(temp != NULL){
   insertAtTail(cloneHead , clonetail , temp ->data) ;
   temp = temp ->next;
}

// step-2 :cloneNode add between original Node
Node* cloneNode = cloneHead;
Node* originalNode = head;
while(originalNode != NULL && cloneNode != NULL){
    Node* next = originalNode ->next;
    originalNode ->next = cloneNode;
    originalNode = next;

    next = cloneNode ->next;
    cloneNode ->next = originalNode;
    cloneNode = next;
}

// step-3 : copy random pointer
temp = head;
while(temp != NULL){
    if(temp ->next != NULL){
        if(temp ->random != NULL){
            temp ->next ->random = temp ->random ->next;
        }
        else{
            temp ->next = temp ->random;
        }
    }
    temp = temp ->next ->next;
}

// step-4 : revert change in step-2
originalNode = head;
cloneNode = cloneHead;
while(originalNode != NULL && cloneNode != NULL){
    originalNode ->next = cloneNode ->next;
    originalNode = originalNode ->next;
    
    if(originalNode != NULL){
        cloneNode ->next = originalNode ->next;
    }
    cloneNode = cloneNode ->next;
}

// step-5 : return ans 
return cloneHead;

}
int main(){

}