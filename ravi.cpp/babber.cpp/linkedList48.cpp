 // remove dublicates from linked list
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
// remove dublicates from linked list of sorted list
Node * uniqueSortedList(Node * head) {
    // empty case
   if(head == NULL)
   return NULL;

   // for non empty case
   Node* curr = head;
   while(curr != NULL){
       if((curr ->next != NULL)&& curr->data == curr->next->data){
           Node* next_next = curr ->next ->next;
           Node* nodeTodelete = curr ->next;
           delete(nodeTodelete);
           curr ->next = next_next;
       }
       else{
           curr = curr ->next;
       }
   }
   return head;
}


//*******************************************************************************************************
// remove dublicates from linked list of unsorted list
Node *removeDuplicates(Node *head){
    // for empty case
    if(head == NULL){
        return NULL;
    }
    // for non empty case
   Node* temp = head;
   Node* curr = NULL;
   Node* deleteNode = NULL;
   while(temp != NULL && temp ->next != NULL){
       curr = temp;
       while(curr ->next != NULL){
           if(temp ->data == curr ->next ->data){ 
               deleteNode = curr ->next;
               curr ->next = curr ->next ->next;
               delete (deleteNode);
           }
           else
               curr = curr ->next;  
       }
       temp = temp ->next;
   }
   return head;
 
    }

int main(){
   
}