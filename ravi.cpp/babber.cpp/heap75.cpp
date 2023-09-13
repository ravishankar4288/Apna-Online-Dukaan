#include <bits/stdc++.h>
using namespace std;


//*****************************************************************************************
//Q-1 : kth smallest element
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {

    // Method-1
    //   int n = r+l;
    //   sort(arr , arr+n);
    //   return arr[k-1];
    

    //Method-2
    priority_queue<int> pq;
    // step-1 ; push first k element in max-heap
    for(int i=0 ; i<k ; i++){
        pq.push(arr[i]);
    }
    
    //step-2 ; rest k element push
    for(int i=k ; i<=r ; i++){
        if(arr[i] < pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    
    //step-3 ; retrun top element of heap
    int ans = pq.top();
    return ans;
    
    
    }
};



//*****************************************************************************************
//Q-2 : is Binary tree is a Heap
class Solution {
  public:
  int nodeCount(struct Node* root){
      if(root == NULL){
          return 0;
      }
      
      int ans = 1 + nodeCount(root->left) + nodeCount(root->right);
      return ans;
  }
  
  bool isCBT(struct Node* root, int index, int count){
      if(root == NULL){
          return true;
      }
      
      if(index >= count){
          return false;
      }
      
      else{
          bool left = isCBT(root->left, 2*index + 1, count);
          bool right= isCBT(root->right, 2*index + 2, count);
          
          return (left && right);
      }
  }
  bool isMaxOrder(struct Node* root){
      // for leaf node
      if(root->left == NULL && root->right == NULL){
          return true;
      }
      
      //for only left child exist
      if(root->right == NULL){
          return (root->data > root->left->data);
      }
      
      // for both child exist
      else{
          bool left = isMaxOrder(root->left);
          bool right = isMaxOrder(root->right);
          return (left && right && root->data > root->left->data && root->data > root->right->data);
      }
  }
    bool isHeap(struct Node* tree) {
        // code here
        int index = 0;
        int totalcount = nodeCount(tree);
        
        if(isCBT(tree, index, totalcount) && isMaxOrder(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};


//*****************************************************************************************
//Q-3 : merge 2 max heap
class Solution{
    public:
    void heapify(vector<int> &arr, int n, int i){
    int largest = i;
    int leftNode = 2*i + 1;
    int rightNode = 2*i + 2;

    if(leftNode < n && arr[largest] < arr[leftNode]){
        largest = leftNode;
    }

    if(rightNode < n && arr[largest] < arr[rightNode]){
        largest = rightNode;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n , largest);
    }
}

    
    
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // step-1 : merge two vector in another vector
        vector<int> ans;
        
        for(auto i : a){
            ans.push_back(i);
        }
        for(auto i : b ){
            ans.push_back(i);
        }
        
        //step-2 : Heapify the this merge vector
        int size = ans.size();
        for(int i=size/2-1 ; i>=0 ; i--){
            heapify(ans , size, i);
        }
        
        return ans;
    }
};