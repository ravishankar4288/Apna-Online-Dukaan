#include<iostream>
using namespace std;

//*********************************************************************************************
//Q-1 : ZigZag Tree Traversal
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

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	if(root == NULL){
    	    return result;
    	}
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(q.size() != 0){
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    for(int i=0 ; i<size ; i++){
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //Normal insert and invert insert
    	        int index = leftToRight ? i : size - i -1;
    	        ans[index] = frontNode ->data;
    	        
    	        if(frontNode ->left){
    	            q.push(frontNode ->left);
    	        }
    	        
    	         if(frontNode ->right){
    	            q.push(frontNode ->right);
    	        }
    	       
    	    }
    	     	 //direction change karni hai after complete one cycle
    	        leftToRight = !leftToRight;
    	        
    	         for(auto i: ans) {
    	         result.push_back(i);
    	         } 
    	}
               return result;
    }
};


//******************************************************************************************************
//Q-2 : Boundary traversal
class Solution {
public:
void traverseLeft(Node* root , vector<int> &ans){
    //base case
    if((root == NULL) ||(root->left==NULL && root->right== NULL)){
        return;
    }
    
    ans.push_back(root->data);
	
    if(root->left){
        traverseLeft(root->left , ans);
    }
    else{
        traverseLeft(root->right , ans);
    }
}

void insertLeaf(Node* root , vector<int> &ans){
    //base case
    if(root==NULL){
        return;
    }
    
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
    }
    
    insertLeaf(root->left , ans);
    insertLeaf(root->right , ans);
}

void insertRight(Node* root , vector<int> &ans ){
    //base case
    if((root==NULL) ||(root->left==NULL && root->right==NULL)){
        return;
    }
    
    if(root->right){
        insertRight(root->right , ans);
    }
    else{
        insertRight(root->left , ans);
    }
    
    // and returing time push the data in queue
    ans.push_back(root->data);
}

    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root == NULL){
            return ans;
        }
        
        ans.push_back(root->data);
        
        //print left part
        traverseLeft(root->left , ans);
        
        // print leaf part
        // left subtree
        insertLeaf(root->left , ans);
        // right subtree
        insertLeaf(root->right , ans);
        
        //print right part
        insertRight(root->right, ans);
        
    } 
};


//**********************************************************************************************
//Q-3 : vertical order traversal

class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        map<int,map<int,vector<int>>> node;
        queue<pair<Node*,pair<int,int>>> q;
        vector<int>ans;
        
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root , make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node* , pair<int,int>> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lev = temp.second.second;
            
            node[hd][lev].push_back(frontNode->data);
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , make_pair(hd-1 , lev+1)));
            }
             if(frontNode->right){
                q.push(make_pair(frontNode->right , make_pair(hd+1 , lev+1)));
            }
            
        }
        
            for(auto i : node){
                for(auto j:i.second){
                    for(auto k: j.second){
                        ans.push_back(k);
                    }
                }
            }
            
        return ans;
        
    }
};


//****************************************************************************************
//Q-4 :Top view Binary tree
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        map<int,int>topNode;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            //1:1 condition check {after looking top view only top node is looked, not any other}
            if(topNode.find(hd) == topNode.end())
                topNode[hd] = frontNode->data;
            
            if(frontNode->left)
                q.push(make_pair(frontNode->left,hd-1));
            
            if(frontNode->right)
                q.push(make_pair(frontNode->right,hd+1));
        }
        
        for(auto i : topNode){
            ans.push_back(i.second);
        }
        
        return ans;
    }

};

//****************************************************************************************************************************
//Q-5 : Bottom view Binary tree
class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>ans;
        if(root==NULL){
            return ans ;
        }
        
        map<int,int> topNode;
        queue<pair<Node*, int>> q;
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            pair<Node*,int> temp = q.front();
            q.pop();
            Node* frontNode = temp.first;
            int hd = temp.second;
            
            //Here Not condiotion apply
            topNode[hd] = frontNode->data;
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left , hd-1));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right , hd+1));
            }
        }
        for(auto i : topNode){
            ans.push_back(i.second);
        }
        
        return ans;
    }
};



//****************************************************************************************************
//Q-6 : left view of binary tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node* root , vector<int>&ans , int lev){
        //base case
        if(root == NULL){
            return ;
        }
        
        // when old leve completed than 
        if(lev == ans.size()){
            ans.push_back(root->data);
        }

        solve(root->left , ans , lev+1);
        solve(root->right , ans , lev+1);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       solve(root , ans , 0);
       return ans;
    }
};




//****************************************************************************************************
//Q-7 : Right view of binary tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void solve(Node* root , vector<int>&ans , int lev){
        //base case
        if(root == NULL){
            return ;
        }
        
        // when old leve completed than 
        if(lev == ans.size()){
            ans.push_back(root->data);
        }
        
        // here only changes (R->L)
        solve(root->right , ans , lev+1);
        solve(root->left , ans , lev+1);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       solve(root , ans , 0);
       return ans;
    }
};


//**********************************************************************************
//Q-8 : Digonal traversal of binary tree
vector<int> diagonal(Node *root)
{
   // your code here
   vector<int> ans;
  
   if(root == NULL){
       return ans;
   }
   
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        while(temp){
            if(temp->left){
                q.push(temp->left);
            }
            
            ans.push_back(temp->data);
            temp = temp->right;
        }
    }
    return ans;
}


