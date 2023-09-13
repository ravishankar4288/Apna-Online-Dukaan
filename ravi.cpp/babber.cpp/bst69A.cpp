//********************************************************************************************************
//Q-1 : search in BST
#include <bits/stdc++.h> 
    class BinaryTreeNode {
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

//method-1(by recursive)
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    //base case 
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        return searchInBST(root->left , x);
    }
    else{
        return  searchInBST(root->right , x);
    }

}

//method -2(by iterative )
bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    BinaryTreeNode<int> *temp = root;
    while(temp != NULL){
        if(temp->data == x){
            return true;
        }

        else if(temp->data>x){
            temp = temp->left;
        }
        else{
            temp = temp->right;
        }
    }
    return false;

}