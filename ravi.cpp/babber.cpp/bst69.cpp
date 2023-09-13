#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


//level order traversal 
void levelOrderTraversal(Node* &root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
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
void inorderTrase(Node* &root){ //LNR
    //base case
    if(root == NULL){
        return ;
    }

inorderTrase(root ->left);
cout<<root ->data<<" ";
inorderTrase(root ->right);  
}


//preode Traversal 
void preorderTrase(Node* &root ){ //NLR
    //base case
    if(root == NULL){
        return;
    }

cout<<root ->data<<" ";
preorderTrase(root ->left);
preorderTrase(root ->right);
}


//postoder Traversal
void postorderTrase(Node* &root ){ //LRN
    //base case
    if(root == NULL){
        return;
    }
    
postorderTrase(root ->left);
postorderTrase(root ->right);
cout<<root ->data<<" ";
}

Node* createBST(Node* root, int data){
    //base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        //put right side of root node
        root->right = createBST(root->right, data);
    }

    else{
        //put left side of node node
        root->left = createBST(root->left, data);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = createBST(root, data);
        cin>>data;
    }
}

//find min value of BST
Node* minValue(Node* &root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

//find max value of BST
Node* maxValue(Node* &root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

// Delecte node from BST
Node* deleteNodeFromBST(Node* root , int val){
    //base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        //case-1 : 0 child
        if(root->left== NULL && root->right== NULL){
            delete root;
            return NULL;
        }

        //case-2 : 1 child
        // left child is not null
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child is not null
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //case-3 : 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteNodeFromBST(root->right, mini);
            return root;
        }
    }

    else if(root->data > val){
        //left side jao
        root->left = deleteNodeFromBST(root->left , val);
        return root;
    }
    else{
        // right side jao
        root->right = deleteNodeFromBST(root->right, val);
        return root;
    }
}



int main(){
    Node* root = NULL;
    cout<<"Enter the data for BST "<<endl;
    takeInput(root);
    
    cout<<endl<<"print the levelOrder trversal "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"print the inorderOrder trversal "<<endl;
    inorderTrase(root);

    cout<<endl<<"print the preOrder trversal "<<endl;
    preorderTrase(root);

    cout<<endl<<"print the postOrder trversal "<<endl;
    postorderTrase(root);

    cout<<endl<<"min value of BST "<<endl;
    cout<<minValue(root)->data;

    cout<<endl<<"max value of BST "<<endl;
    cout<<maxValue(root)->data;


//deletion----->

    cout<<endl<<"DELETION"<<endl;
    deleteNodeFromBST(root, 50);

    cout<<endl<<"print the levelOrder trversal "<<endl;
    levelOrderTraversal(root);

    cout<<endl<<"print the inorderOrder trversal "<<endl;
    inorderTrase(root);

    cout<<endl<<"print the preOrder trversal "<<endl;
    preorderTrase(root);

    cout<<endl<<"print the postOrder trversal "<<endl;
    postorderTrase(root);

    cout<<endl<<"min value of BST "<<endl;
    cout<<minValue(root)->data;

    cout<<endl<<"max value of BST "<<endl;
    cout<<maxValue(root)->data;    


}



