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
//Q-1 :construct binary tree from inorder and preoder (pandding)
//link: https://practice.geeksforgeeks.org/problems/construct-tree-1/1
//-->method-1
class Solution{
    public:
    int findposition(int in[], int &element , int n){
        for(int i=0; i<n ; i++){
            if(in[i] == element)
                return i;
        }
        return -1;
    }
    
    Node* solve(int in[], int pre[], int &index , int inorderstart , int inorderend , int n ){
        // base case
        if(index >= n || inorderstart > inorderend){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = findposition(in , element , n);
        
        // recursive call
        root->left = solve(in, pre, index, inorderstart, position-1, n);
        root->right = solve(in, pre, index, position+1, inorderend, n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n);
        return ans;
    }
};



//method-2:


class Solution{
    public:
    void creatingMap(int in[], map<int,int> &nodeToIndex , int n){
        for(int i=0; i<n ; i++){
            nodeToIndex[in[i]] = i;
    }
    }
    
    Node* solve(int in[], int pre[], int &index , int inorderstart , int inorderend , int n , map<int,int> &nodeToIndex )
    {
        // base case
        if(index >= n || inorderstart > inorderend){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = nodeToIndex[element];
        
        // recursive call
        root->left = solve(in, pre, index, inorderstart, position-1, n, nodeToIndex);
        root->right = solve(in, pre, index, position+1, inorderend, n, nodeToIndex);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        map<int,int>nodeToIndex;
        //creating a map for map node to index
        creatingMap(in, nodeToIndex , n);
        
        Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n, nodeToIndex);
        return ans;
    }
    
};


//************************************************************************************************************
//Q-1 :construct binary tree from inorder and postorder
 void creatingMap(int in[], map<int,int> &nodeToIndex , int n){
        for(int i=0; i<n ; i++){
            nodeToIndex[in[i]] = i;
        }
    }
    
     Node* solve(int in[], int post[], int &index , int inorderstart , int inorderend , int n , map<int,int> &nodeToIndex )
    {
        // base case
        if(index <0 || inorderstart > inorderend){
            return NULL;
        }
        
        int element = post[index--];
        Node* root = new Node(element);
        int position = nodeToIndex[element];
        
        // recursive call
        root->right = solve(in, post, index, position+1, inorderend, n, nodeToIndex);
        root->left = solve(in, post, index, inorderstart, position-1, n, nodeToIndex);
        
        
        return root;
    }
Node *buildTree(int in[], int post[], int n) {
    // Your code here
      int postOrderIndex = n-1;
        map<int,int>nodeToIndex;
        //creating a map for map node to index
        creatingMap(in, nodeToIndex , n);
        
        Node* ans = solve(in, post, postOrderIndex, 0, n-1, n, nodeToIndex);
        return ans;
    }
