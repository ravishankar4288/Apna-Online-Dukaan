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
//Q-1 : sum of nodes on the longest path from root to leaf node
class Solution
{
public:
void solve(Node* root , int len , int &maxlen , int sum , int &maxsum){
    //base case
    if(root == NULL){
        if(len>maxlen){
            maxlen= len;
            maxsum = sum;
        }
        else if(len == maxlen){
            maxsum = max(sum , maxsum);
        }
        return;
    }
    
    sum = sum + root->data;
    
    solve(root->left , len+1 , maxlen , sum , maxsum);
    solve(root->right , len+1 , maxlen , sum , maxsum);
}
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        int len = 0;
        int maxlen =0;
        
        int sum = 0;
        int maxsum = INT_MIN;
        
        solve(root , len , maxlen , sum , maxsum);
        return maxsum;
    }
};



//************************************************************************************************************
//Q-2 : Lowest common ancestor in a binary tree
class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       //Your code here
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       
       Node* leftans = lca(root->left , n1 , n2);
       Node* rightans = lca(root->right , n1 , n2);
       
       if(leftans!= NULL && rightans!= NULL){
           return root;
       }
       
       else if(leftans!= NULL && rightans== NULL){
           return leftans;
       }
       
       else if(leftans== NULL && right!= NULL){
           return rightans;
       }
       
       else{
          return NULL;
       }
       
    }
};



//************************************************************************************************************
//Q-3 :kth-sum paths--->pading (TLE)
//question link :  https://practice.geeksforgeeks.org/pr...

class Solution{
  public:
  void solve(Node* root , int k , vector<int>path , int &count){
      //base case
      if(root == NULL){
          return ;
      }
      
      path.push_back(root->data);
      
      //traverse left side
      solve(root->left, k, path, count );
      
      //traverse right side
      solve(root->right, k, path , count);
      
      int size = path.size();
      int sum = 0;
      for(int i=size-1 ; i>=0 ; i--){
          sum +=  path[i];
          if(sum == k){
              count++;
          }
      }
      
      path.pop_back();
  }
    int sumK(Node *root,int k)
    {
        // code here 
        vector<int> path;
        int count = 0;
        solve(root ,k ,  path , count );
        return count;
    }
};


//************************************************************************************************
//Q-4 :kth Ancesttor 
 Node* solve(Node* root, int &k , int &node){
        //base case
        if(root == NULL){
            return NULL;
        }
        
        if(root->data == node){
            return root;
        }
        
        Node* leftans = solve(root->left, k , node);
        Node* rightans = solve(root->right, k , node);
        
        //returing time
        if(leftans != NULL && rightans == NULL){
            k--;
            
            if(k<= 0){
            //ans lock kar do
            k = INT_MAX;
            return root;
            }
            return leftans;
        }
        
        if(leftans == NULL && rightans != NULL){
            k--;
            
            if(k<= 0){
            //ans lock kar do
            k = INT_MAX;
            return root;
            }
            return rightans;
        }
        return NULL;
    }
    
int kthAncestor(Node *root, int k, int node)
{
     // Code here
    Node* ans = solve(root , k , node);
    if(ans == NULL || ans->data == node){
        return -1;
    }
    else{
        return ans->data;
    }
    
}


//************************************************************************************************
//Q-4 :Maximum sum of Non-adjacent Node
class Solution{
  public:
  pair<int,int> solve(Node* root){
      //base case 
      if(root == NULL){
          pair<int,int> p = make_pair(0,0);
          return p;
      }
      
      pair<int,int> left = solve(root->left);
      pair<int,int> right = solve(root->right);
      
      pair<int,int> result;
      result.first = root->data + left.second + right.second;
      result.second = max(left.first , left.second) + max(right.first , right.second);
      
      return result;
  }
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        pair<int,int> ans = solve( root);
        return max(ans.first , ans.second);
    }
};