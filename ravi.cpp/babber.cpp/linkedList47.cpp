// Detect and remove loop and find starting point of loop
#include<iostream>
//#include<map>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    // constructor 
    Node(int data){
        this ->data = data;
        this ->next = NULL;
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
    tail = tail ->next;
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

// print new node
void print(Node* &head , Node* &tail ){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
    
}
/*
// for check loop is present or not : method-1
bool detectLoop(Node* head){
    if(head == NULL){
        return 0;
    }

    map<Node*,bool>visited;
    Node* temp = head;
    while(temp != NULL){
        if(visited[temp] == 1){
            return 1;
        }
        visited[temp] = 1;
        temp = temp ->next;
    }
    return 0;
} */

// for check loop is present or not : method-2
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

//for find starting point of loop
Node* getstaringNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floyedDetectloop(head);
    if(intersection == NULL){
        return NULL;
    }
    Node* slow = head;
    while(slow != intersection){
        slow = slow ->next;
        intersection = intersection ->next;
    }
    return slow;
}

// for remove loop
Node* removeLoop(Node* head){
    if(head == NULL){
        return NULL ;
    }

    Node* startingnode = getstaringNode(head);
    if(startingnode == NULL){
        return head;
    }

    Node* temp = startingnode;
    while(temp ->next != startingnode){
        temp = temp ->next;
    }
    temp ->next = NULL;
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
    insertAtPosition(tail,head, 5, 40);
    print(head,tail);
    insertAtPosition(tail,head, 6, 50);
    print(head,tail);
    insertAtPosition(tail,head, 7, 60);
    print(head,tail);

    head = head ->next  ;
    tail ->next = head->next;

    if(floyedDetectloop(head) != NULL){
      cout<<"loop is present "<<endl;
    }
    else{
        cout<<"loop is not present "<<endl;
    }

    Node* loop = getstaringNode(head);
    cout<<"starting point of loop is : "<<loop ->data<<endl;

   removeLoop(head);

   if(floyedDetectloop(head) != NULL){
      cout<<"loop is present "<<endl;
    }
    else{
        cout<<"loop is not present "<<endl;
    }

   
    
    return 0;

}