//merge sort
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    //constructor 
    node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};
node* findmid(node* head){
    node* slow = head;
    node* fast = head ->next;
    while(slow != NULL && fast->next != NULL){
        slow = slow ->next;
        fast = fast ->next ->next;
    }
    return slow;
}

node* merge(node* left , node* right ){
    if(left == NULL){
        return right ;
    }

    if(right == NULL){
        return left;
    }
    
    node* ans = new node(-1);
    node* temp = ans;
    while(left != NULL && right != NULL){
        if(left ->data < right ->data){
         temp ->next = left;
         temp = left;
         left = left ->next;
        }
        else{
            right ->next = temp;
            temp = right;
            right = right ->next;
        }
    }
    while(left != NULL){
        left ->next = temp;
        temp = left ;
        left = left ->next;
    }
    while(right != NULL){
        right ->next = temp;;
        temp = right ;
        right = right ->next;
    }
    ans = ans ->next;
    return ans;
}
node* mergesort(node* head){
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    //step-1 : find mid 
    node* mid = findmid(head);

    //step-2 : break into 2 halves
    node* left = head;
    node* right = mid ->next;
    mid ->next = NULL;

    // step-3 : recusivelly sort left and righ side
    left = mergesort(left);
    right = mergesort(right);

    //step-4 : merge left and right sorted halves
    node* result = merge(left , right);

    // step-5 : return ans 
    return result;

}
int main(){
    
    return 0;
}