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
//Q-1 : Burning Tree
class Solution {
  public:
  //create mapping and 
  // return target node
  Node* createParentMapping(Node* root, int target, map<Node*,Node*> &nodeToParent ){
      Node* res =NULL;
      queue<Node*>q;
      q.push(root);
      nodeToParent[root]=NULL;
      
      while(!q.empty()){
          Node* front = q.front();
          q.pop();
          
          if(front->data == target){
              res=front;
          }
          
          if(front->left){
              nodeToParent[front->left] = front;
              q.push(front->left);
          }
          
          if(front->right){
              nodeToParent[front->right] = front;
              q.push(front->right);
          }
      }
      
      return res;
  }
  
  int burnTree(Node* root,  map<Node*,Node*> &nodeToParent){
      queue<Node*>q;
      map<Node*, bool> visited;
      
      q.push(root);
      visited[root] = 1;
      int ans = 0;
      
      while(!q.empty()){
          bool flag =0;
          int size = q.size();
          
          for(int i=0 ; i<size ; i++){
              //process all parosi node
              Node* front = q.front();
              q.pop();
              
              if(front->left && !visited[front->left]){
                  flag = 1;
                  q.push(front->left);
                  visited[front->left] = 1;
              }
              
              if(front->right && !visited[front->right]){
                  flag = 1;
                  q.push(front->right);
                  visited[front->right] = 1;
              }
              
              if(nodeToParent[front] && !visited[nodeToParent[front]]){
                  flag = 1;
                  q.push(nodeToParent[front]);
                  visited[nodeToParent[front]] = 1;
              }
          }
          
          if(flag == 1){
              ans++;
          }
      }
      return ans;
      
  }
    int minTime(Node* root, int target) 
    {
        // algorithm 
        //step-1 : create nodeToParent mapping
        //2 : find target node
        //3 : burn the tree in min time 
        
        map<Node*,Node*>nodeToParent;
        Node* targetNode = createParentMapping(root, target, nodeToParent);
        int ans = burnTree(targetNode, nodeToParent);
        return ans;
        
    }
};