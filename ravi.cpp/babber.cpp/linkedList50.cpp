#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};
//Q-1 : check palindrome or not (method 1)
bool checkpalindrome(vector<int> arr){
   int n = arr.size();
   int s = 0;
   int e = n-1;
   while(s<=e){
    if(arr[s] == arr[e]){
        return 1;
        s++;
        e--;
    }
    return 0;
   }
}
bool ispalindrome(Node* head){
    vector<int>arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp ->data);
        temp = temp ->next;
    }
    return checkpalindrome(arr);
}


//************************************************************************************
//2nd method
Node* getmiddle(Node* head){
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
}

Node* reverse(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    while(curr != NULL){
        next = curr ->next;
        curr ->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool ispalindrome(Node* head){
    if(head == NULL || head ->next == NULL){
        return 1;
    }
    //step1 - find middle point
    Node* middle = getmiddle(head);

    //step2 - reverse half linked list
    Node* temp = middle ->next;
    middle->next = reverse(head);

    //step3 - campare two hale linked list
    Node* head1 = head;
    Node* head2 = middle ->next;
    while(head2 != NULL){
        if(head1 ->data != head2 ->data){
            return 0;
        }
        head1 = head1 ->next;
        head2 = head2 ->next;
    }
    return 1;
}
int main(){

}