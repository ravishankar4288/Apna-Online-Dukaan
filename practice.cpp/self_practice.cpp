#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
     int data;
     Node* left;
     Node* right;

     Node( int data){
     this-> data = data;
     this-> left = NULL;
     this-> right = NULL;
     }
};
     Node* buildBinaryTree(Node* root){
        cout<<"Enter your data : "<<endl;
        int data;
        cin>>data;
        root = new Node(data);

        if(data == -1){
            return NULL;
        }
     

     cout<<"Enter the data of left side of node of : "<<data<<endl;
     root->left = buildBinaryTree(root->left);

     cout<<"Enter the data of right side of node of "<<data<<endl;
     root->right = buildBinaryTree(root ->right);
return root;
    
}

//this the level wise printing 
void levelTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
    Node* temp = q.front();
    q.pop();

    if(temp == NULL){
        cout<<endl;

        if(!q.empty()){
            q.push(NULL);
        }
    }

    else{
    cout<<temp->data<<" ";
    if(temp->left){
        q.push(temp->left);
    }

    if(temp->right){
        q.push(temp->right);
    }
}
    }
}

//Inorder printing (LNR)
void inorderPrinting(Node* root){
    //base case
    if(root == NULL){
        return ;
    }
    inorderPrinting(root->left);
    cout<<root->data<<" ";
    inorderPrinting(root->right);
}


//Preorder printing (NLR)
void preOrderPrinting(Node* root){
    //base case
    if(root == NULL){
      return;
    }

    cout<<root->data<<" ";
    preOrderPrinting(root->left);
    preOrderPrinting(root->right);
}

// postorder Printing(LRN)
void postorderPrintg(Node* root){
    // base case 
    if(root == NULL){
        return;
    }
    postorderPrintg(root->left);
    postorderPrintg(root->right);
    cout<<root->data<<" ";
}


//binary tree form by level Traversal
void binaryTreeformBYLevelTraversal(Node* root ){
    queue<Node*>q;
    int data;
    cout<<"Enter the data for root node : "<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the data for left side of root node of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            root->left = new Node(leftdata);
            q.push(root->left);
        }

        cout<<"Enter the data for right side of root node of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            root->right = new Node(rightdata);
            q.push(root->right);
        }
    }
}



int main(){
    Node* root = NULL;

binaryTreeformBYLevelTraversal(root);

// // creating of binary tree 
// root = buildBinaryTree(root);
// cout<<endl;
// //level wise printing 
// // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

cout<<"this is the level wise printing : "<<endl;
levelTraversal(root);


// cout<<"this is the inorderPrinting : "<<endl;
// inorderPrinting(root);
// cout<<endl;

// cout<<"this is the preorderPrinting :"<<endl;
// preOrderPrinting(root);
// cout<<endl;

// cout<<"this is the postorder printig :"<<endl;
// postorderPrintg(root);
return 0;

}