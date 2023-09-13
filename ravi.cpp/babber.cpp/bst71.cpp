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

//*************************************************************************
//Q-1 : Two Sum IV - Input is a BST
void inorder(BinaryTreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorderVector;
    inorder(root, inorderVector);

    int i=0;
    int j=inorderVector.size()-1;
    while(i<j){
        int sum = inorderVector[i] + inorderVector[j];
        if(sum == target)
        return true;

        else if(sum>target)
        j--;

        else
        i++;
    }

    return false;
}



//*************************************************************************
//Q-2 :Flatten BST To A Sorted List

void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return;
    }
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // step-1 : store sorted node by inorder traverasl
    vector<int> inorderVector;
    inorder(root, inorderVector);
    int n = inorderVector.size();

    //step-2 :
    TreeNode<int>* newRoot = new TreeNode<int>(inorderVector[0]);
    TreeNode<int>* curr = newRoot;
    for(int i=1 ; i<n ; i++){
        TreeNode<int>* temp = new TreeNode<int>(inorderVector[i]);
        
        curr->left = NULL;
        curr->right = temp;
        curr = temp;
    }

    //step-3
    curr->left = NULL;
    curr->right = NULL;

    return newRoot;

}



//*************************************************************************
//Q-3 : convert Normal BST to Balanced BST
void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL){
        return ;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int>* normalToBST(int s, int e, vector<int> &in){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left = normalToBST(s, mid-1, in);
    root->right = normalToBST(mid+1, e, in);

    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int>inorderVector;
    inorder(root, inorderVector);

    return normalToBST(0, inorderVector.size()-1, inorderVector);
}



//*************************************************************************
//Q-4 :Preorder traversal of a BST (form BST with the help of preorder)
BinaryTreeNode<int>* solve(vector<int> &preorder, int mini, int maxi, int &i){
    //base case
    if(i >= preorder.size())
        return NULL;

    if(preorder[i] < mini || preorder[i] > maxi) 
       return NULL;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(preorder[i++]);
    root->left = solve(preorder, mini, root->data, i);
    root->right = solve(preorder, root->data, maxi, i);
    return root;  
}

BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    // Write your code here.
    int mini = INT_MIN;
    int maxi = INT_MAX;
    int i = 0;
    return solve(preorder, mini, maxi, i);
}