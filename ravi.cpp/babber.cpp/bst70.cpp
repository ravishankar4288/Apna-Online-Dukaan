//*************************************************************************
// Q-1 :validate BST

#include <bits/stdc++.h> 
    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

bool isBST(BinaryTreeNode<int> *root , int min, int max){
    //base case 
    if(root == NULL){
        return true;
    }

    if(root->data >= min && root->data <=max){
        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right,root->data, max );
        return left && right;
    }
    else{
        return false;
    }

}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return isBST(root, INT_MIN, INT_MAX);
}


//*************************************************************************
//Q-2 : Find K-th smallest Element in BST

int solve(BinaryTreeNode<int>* root, int &i, int k){
    //base case
    if(root==NULL){
        return -1;
    }
    //for L
    int left = solve(root->left, i, k);
    if(left != -1){
        return left;
    }

    // for N
    i++;
    if(i==k){
        return root->data;
    }

    //for R
    return solve(root->right, i, k);
}

int kthSmallest(BinaryTreeNode<int>* root, int k) {
    // Write your code here.
    int i=0;
    return solve(root, i, k);
}





//*************************************************************************
//Q-3 : Inorder Predecessor/Successor in BST
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // step-1 : find key 
    int pred = -1;
    int succ = -1;
    BinaryTreeNode<int>* temp = root;

    while(temp->data != key){
    if(temp->data >key){
        succ = temp->data;
        temp = temp->left;
    } else {
      pred = temp->data;
      temp = temp->right;
    }
    }

    //step-2 : find pred and succ
    //pred
    BinaryTreeNode<int>* leftTree = temp->left;
    while(leftTree != NULL){
        pred= leftTree->data;
        leftTree = leftTree->right;
    }

    //succ
    BinaryTreeNode<int>* rightTree = temp->right;
    while(rightTree != NULL){
        succ= rightTree->data;
        rightTree = rightTree->left;
    }

    // pair<int,int> ans = make_pair(pred, succ);
    // return ans;
    return {pred, succ};

}


//*************************************************************************
//Q-4 :LCA of Two Nodes In A BST
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root == NULL){
        return NULL;
    }

    if(root->data > P->data && root->data >Q->data){
        return LCAinaBST(root->left, P, Q);
    }

     if(root->data < P->data && root->data <Q->data){
        return LCAinaBST(root->right, P, Q);
    }

    return root;

}
