//reverse linked list (k-groups) and check linked list is circular or not
#include<iostream>
using namespace std;
class Node{
    public:
    int data ;
    Node* next;
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};
//reverse linked list (k-groups)
Node* kreverse(Node* head , int k){
    // base case 
    if(head == NULL){
        return NULL;
    }

    //syep-1 : reverse 1st k nodes
    Node* next = NULL;
    Node* pre = NULL ;
    Node* curr = head;
    int count = 0;
    while(curr != NULL && count <k){
        next = curr ->next;
        curr ->next = pre;
        pre = curr;
        curr = next;
        count++;
    }
    
    // step-2 : recursion dekh lega age
    if(next != NULL) {
      head ->next =kreverse(next , k);
    }

    //step-3 : return ans 
    return pre;
}

//*********************************************************************************************

//check linked list is circular or not
Node* floyedDetectloop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL){
        fast = fast ->next;
        if(fast != NULL){
            fast = fast ->next;
        }
        slow = slow ->next;

        if(slow == fast ){
        return slow;
    }
    }
    return NULL;
}
bool isCircular(Node* head){
    // for empty case 
    if(head == NULL){
        return true;
    }
    // for non empty case
    Node* intersection = floyedDetectloop(head);
    if(intersection == NULL){
        return false;
    }
    Node* slow = head; 
while(slow != intersection){
    slow = slow ->next;
    intersection = intersection ->next;
}
if(slow == head){
    return true;
}
else{
    return false;
}
}


int main(){
    
    return 0;
}