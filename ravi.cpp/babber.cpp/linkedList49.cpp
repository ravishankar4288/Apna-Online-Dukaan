#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    //constructor 
    Node(int data ){
        this ->data = data;
        this ->next = NULL;
    }
};
//method-1: for 0s 1s 2s problem (with data replacement )
Node* sortList(Node *head)
{
    // Write your code here.
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    Node* temp = head;
    while(temp != NULL){
        if(temp ->data == 0){
            zerocount++;
        }
        else if(temp ->data == 1){
            onecount++;
        }
        else if(temp ->data == 2){
            twocount++;
        }
        temp = temp ->next;
    }

    temp = head;
    while(temp != NULL){
        if(zerocount != 0){
            temp ->data = 0;
            zerocount--;
        }
        else if(onecount != 0){
            temp ->data = 1;
            onecount--;
        }
        else if(twocount != 0){
            temp ->data = 2;
            twocount--;
        }
        temp = temp ->next;
    }
    return head;
}

//method-2: for 0s 1s 2s problem (without data replacement )
    void insertAtTail(Node* &tail , Node* curr){
        tail ->next = curr;
        tail = curr;
    }
    Node* sortinglist(Node* head){
        //create new linked list
        Node* zerohead = new Node(-1);
        Node* zerotail = zerohead;
        Node* onehead = new Node(-1);
        Node* onetail = onehead;
        Node* twohead = new Node(-1);
        Node* twotail = twohead;

        Node* curr = head;
        while(curr != NULL){
            if(curr->data == 0){
                insertAtTail(zerotail , curr);
            }
            else if(curr ->data == 1){
                insertAtTail(onetail , curr);
            }
            else if(curr ->data == 2){
                insertAtTail(twotail , curr);
            } 
            curr = curr ->next;   
        }

        // merge linked list
        if(onehead ->next != NULL){
            zerotail ->next = onehead->next;
        }
        else{
            zerotail->next = twohead->next;
        }
        onetail->next = twohead->next;
        twotail->next = NULL;

        //sethead
        head = zerohead->next;

        //dalete headnode of one , two and three
        delete zerohead;
        delete onehead;
        delete twohead;

        return head;
    }




////////////////////////
Node* insertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail ->next = temp;
    tail = temp;
}
Node* sortList(Node *head)
{
    // Write your code here.
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;

    Node* curr = head;
    while(curr != NULL){
        if(curr ->data == 0){
            insertAtTail(zerotail , curr ->data);
        }
        else if(curr ->data == 1){
            insertAtTail(onetail , curr ->data);
        }
        else if(curr ->data == 2){
            insertAtTail(twotail , curr ->data);
        }
        curr = curr ->next;
    }

    // merge list
    if(onehead != NULL){
        zerotail->next = onehead ->next;
    }
    else{
        zerotail ->next = twohead ->next;
    }
    onetail ->next = twohead ->next;
    twotail ->next = NULL;

    // set head
    head = zerohead ->next;

    //delete extra node 
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
}
    
//**************************************************************************************
// merge two sorted linked list
Node* solve(Node*first , Node* second){

    // if only one node is present in list1 than
    if(first ->next == NULL){
        first ->next = second;
        return first;
    }

    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;
    while(next1 !=NULL && curr2 != NULL){
        if((curr2->data >= curr1->data ) && (curr2->data <= next1->data)){
            // add node 
            curr1 ->next = curr2;
            next2 = curr2 ->next;
            curr2 ->next = next1;
            // update 
            curr1 = curr2 ;
            curr2 = next2;
        }
        else{
            //Here only update 
            curr1 = next1;
            next1 = next1 ->next;

            if(next1 == NULL){
                curr1 ->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node* mergesortlist(Node* first ,Node* second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    if(first ->data <= second ->data){
        return solve(first , second);
    }
    else{
        return solve(second , first);
    }
}

int main(){
    
    return 0;
}