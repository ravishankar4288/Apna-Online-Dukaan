//Q : find sum of two linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constrctor 
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};
Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr ->next = prev;
        prev = curr ;
        curr = next;
    }
    return prev;
}
void insertAtTail(Node* &head , Node* &tail , int d){
    Node* temp = new Node(d);
     //for empty case 
     if(head == NULL ){
        head = temp;
        tail = temp;
        return;
     }
     else{
        tail ->next = temp;
        tail = temp;
     }
}
Node* addition(Node* &first , Node* &second){
    int carry = 0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    while(first != NULL && second != NULL){
        int sum = carry + first->data + second->data ;
        int digit = sum%10;
        
        // create a LL and add in ans LL
        insertAtTail(ansHead , ansTail , digit);
        carry = sum/10;
        first = first ->next;
        second = second ->next;
    }
    while(first != NULL){
        int sum = carry + first->data  ;
        int digit = sum%10;
        
        // create a LL and add in ans LL
        insertAtTail(ansHead , ansTail , digit);
        carry = sum/10;
        first = first ->next;
    }
    while(second != NULL){
        int sum = carry + second->data  ;
        int digit = sum%10;
        
        // create a LL and add in ans LL
        insertAtTail(ansHead , ansTail , digit);
        carry = sum/10;
        second = second ->next;
    }
     while(carry != 0){
        int sum = carry  ;
        int digit = sum%10;
        
        // create a LL and add in ans LL
        insertAtTail(ansHead , ansTail , digit);
        carry = sum/10;
    }
    return ansHead;
}
Node* getsum(Node* first , Node* second){
    //step-1 : reverse linked list
    first = reverse(first);
    second = reverse(second);

    //step-2 : addtion of two linked list
    Node* ans = addition(first , second);

    // step-3 : reverse ans LL
    ans = reverse(ans);
    return ans ;
   
}
int main(){


}