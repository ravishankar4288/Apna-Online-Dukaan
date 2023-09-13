#include<iostream>
using namespace std;

//**********************************************************************
//Q-1 : find Height of Binary Tree
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        //base case
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        
        int ans = max(leftHeight , rightHeight);
        
        return (ans+1);   
    }
};


//******************************************************************************************
//Q-2 ; find Diameter of Tree
//Approach - 1 (T.C = N^2)
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}


class Solution {
  private:
  int height(struct Node* node){
        //base case
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        
        int ans = max(leftHeight , rightHeight) + 1;
        
        return ans;   
    }
  public:
  
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        if(root == NULL){
            return 0;
        }
        
        int op1 = diameter(root ->left);
        int op2 = diameter(root ->right);
        int op3 = height(root ->left) + height(root ->right) + 1;
        
        int ans = max(op1 , max(op2 , op3));
        return ans;
        
    }
};

//Approach-2: (T.C = N)******************************
class Solution {
  public:
  pair<int, int> diameterfast(Node* root){
      //base case{
          if(root == NULL){
              pair<int,int> p = make_pair(0,0);
             return p;
          }
          
          pair<int,int> left = diameterfast(root ->left);
          pair<int,int> right = diameterfast(root ->right);
          
          int op1 = left.first;
          int op2 = right.first;
          int op3 = left.second + right.second + 1;
          
          pair<int,int> ans;
          ans.first = max(op1 , max(op2,op3));
          ans.second = max(left.second , right.second) + 1;
          return ans;
      }

    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
     return diameterfast(root).first;
    }
};



//***************************************************************************************************************************
//Q-3 : Check for balanced tree
//Approach -1 (T.c = N^2)
class Solution{
    private:
   int height(struct Node* node){
        //base case
        if(node == NULL){
            return 0;
        }
        
        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        
        int ans = max(leftHeight , rightHeight);
        
        return (ans+1);   
    }
    public:
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        //base case
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root ->left);
        bool right = isBalanced(root ->right);
        bool diff = abs (height(root ->left) - height(root ->right)) <=1;
        
        if(left && right && diff){
            return true;
        }
        else{
            false;
        }
        
    }
};

//Approach -2 (T.C = N) ************************************************************
class Solution{

    public:
    pair<bool,int> isBalancedfast(Node* root){
        //base case
        if(root == NULL){
           pair<bool , int> p = make_pair(true,0);
           return p;
        }
        
        pair<bool , int> left = isBalancedfast(root ->left);
        pair<bool , int> right = isBalancedfast(root ->right);
        
        bool leftans = left.first;
        bool rightans = right.first;
        bool diff = abs(left.second - right.second) <=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second , right.second) + 1;
        
        if(leftans && rightans && diff){
            ans.first = true;
        }
        else{
           ans.first = false;
        }
        
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return isBalancedfast(root).first;
    }
};



//**************************************************************************************************************************
//Q-4 : check Identical trees
class Solution
{
    public:
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        //base case
        if(r1 == NULL && r2== NULL){
            return true;
        }
        if(r1 == NULL && r2 != NULL){
            return false;
        }
        if(r1 != NULL && r2 == NULL){
            return false;
        }
        
        bool left = isIdentical(r1 ->left , r2 ->left);
        bool right = isIdentical(r1 ->right , r2 ->right);
        
        bool value = r1->data == r2->data;
        
        if(left && right && value){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};


//************************************************************************************************************************
//Q-5 : check sum tree or not
class Solution
{
    public:
    pair<bool,int> isSumTreefast(Node* root){
        //base case
        if(root == NULL){
            pair<bool,int> p = make_pair(true , 0);
            return p;
        }
        if(root ->left == NULL && root ->right == NULL){
            pair<bool,int> p = make_pair(true , root->data);
            return p;
        }
        
        pair<bool,int> left = isSumTreefast(root ->left);
        pair<bool,int> right = isSumTreefast(root ->right);
        
        bool leftans = left.first;
        bool rightans = right.first;
        bool cond = root ->data == left.second + right.second;
        
        pair<bool,int> ans;
        
        if(leftans && rightans && cond){
            ans.first = true;
            ans.second = root->data + left.second + right.second;
        }
        else{
            ans.first = false;
        }
        
        return ans;
        
    }
    bool isSumTree(Node* root)
    {
        return  isSumTreefast(root).first;
    }
};

