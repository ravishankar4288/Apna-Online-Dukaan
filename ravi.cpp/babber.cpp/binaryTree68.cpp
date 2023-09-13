#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


//************************************************************************************************************
//Q-1 :Flatten binary tree to linked list
class Solution
{
    public:
    void flatten(Node *root)
    {
        //code here
        Node* curr = root;
        while(curr != NULL){
            if(curr->left){
                Node* pred = curr->left;
                while( pred->right){
                    pred = pred->right;
                }
                
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;            
            }
            curr=curr->right;
        }
        
        // //curr ke left ko NULL karna hai 
        // curr = root;
        // while(curr != NULL){
        //     curr->left = NULL;
        //     curr = curr->right;
        // }
    }
};