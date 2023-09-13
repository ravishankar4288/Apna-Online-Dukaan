// reverse linked list and find middle term 
#include<iostream>
using namespace std;
class Node {
    public:
    int data ;
    Node* next;
    Node* prev;
    //conntructor 
    Node (int data){
        this ->data = data;
        this ->next = NULL;
        this ->prev = NULL;
    }
//destr
~Node (){
    int value = this ->data;
    if(this ->next != NULL){
        delete next;
        this ->next = NULL;
    }
    cout<<"memory is free for node with data "<<value<<endl;
}

};



//reverse linked list

Node* reverseList(Node* head){
    if(head == NULL || head->next == NULL){
       return head;
    }

    Node* curr = head;
    Node* prev = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr ->next;
        curr ->next = prev;
        prev = curr; 
        curr = forward;
    }
    return prev;
    
}

//reverse linked list in double linked list
Node* reverseDLL(Node * head)
{
    //Your code here
    if(head == NULL || head ->next == NULL){
        return head;
    }
    Node* temp = NULL;
    Node* curr = head;
    while(curr != NULL){
        temp = curr ->prev;
        curr ->prev = curr ->next;
        curr ->next = temp;
        curr = curr ->next;
       
    }
    return temp ;
}

//********************************************************************************************************
// find middle term
Node *findMiddle(Node *head) {
    // Write your code here
    if(head == NULL || head ->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL){
        fast = fast ->next;
        if (fast != NULL) {
          fast = fast->next;
        }
            slow = slow ->next;
      
    }
     return slow;
}


// by recursion
void reverse(Node* &head , Node* curr , Node* prev ){
    // base case
    if(curr == NULL){
        head = prev;
        return ;
    }
    Node* forward = curr ->next;
    reverse(head ,forward , curr);
    curr ->next = prev;
}
Node* reverselikelist(Node* & head){
    Node* curr = head;
    Node* prev = NULL;
    reverse(head ,curr , prev);
    return head;
}

int main(){
  
   
    return 0;
}