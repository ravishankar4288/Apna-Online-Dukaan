#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data;
        this -> left = NULL;
        this ->right = NULL;
    }
};

node* buildBinaryTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);

//base case
    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for inserting at left side of "<<data<<endl;
    root ->left = buildBinaryTree(root ->left);

    cout<<"Enter the data for inserting at right side of "<<data<<endl;
    root ->right = buildBinaryTree(root ->right);

   return root;
}

//level order traversal 
void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        

        if(temp == NULL){ //purana level complte traverse ho chuka hai
           cout<<endl;
           if(!q.empty()){
            //queue still has some child node
            q.push(NULL);
           }
        }
        else{
            cout<<temp->data <<" ";
            if(temp ->left){
            q.push(temp ->left);
        }

        if(temp ->right){
            q.push(temp ->right);
        }
        }
    }
}

//inorder Traversal 
void inorderTrase(node* root){ //LNR
    //base case
    if(root == NULL){
        return ;
    }

inorderTrase(root ->left);
cout<<root ->data<<" ";
inorderTrase(root ->right);  
}


//preode Traversal 
void preorderTrase(node* root ){ //NLR
    //base case
    if(root == NULL){
        return;
    }

cout<<root ->data<<" ";
preorderTrase(root ->left);
preorderTrase(root ->right);
}


//postoder Traversal
void postorderTrase(node* root ){ //LRN
    //base case
    if(root == NULL){
        return;
    }
    
postorderTrase(root ->left);
postorderTrase(root ->right);
cout<<root ->data<<" ";
}


//Build binary Tree from level order
void buildLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter the data for root node ;"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the data for left of "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata != -1){
            temp ->left = new node(leftdata);
            q.push(temp ->left);
        }

        cout<<"Enter the data for right of "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata != -1){
            temp ->right = new node(rightdata);
            q.push(temp ->right);
        }
    }

}
int main(){
    node* root = NULL;
   
   /*
    //create Binary Tree
    root = buildBinaryTree(root);
     
    // data -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order traversal 
    cout<<"print the level order traversal : "<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    //inorder traversal
    cout<<"this is inorder traversal element ; "<<endl;
    inorderTrase(root);
    cout<<endl;

    //preoder Traversal
    cout<<"this is preorder traversal element ; "<<endl;
    preorderTrase(root);
    cout<<endl;

    //post Traversal
    cout<<"this is postorder traversal element ; "<<endl;
    postorderTrase(root);
    cout<<endl;
*/

     buildLevelOrder(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    //level order traversal 
    cout<<"print the level order traversal : "<<endl;
    levelOrderTraversal(root);

    return 0;

}