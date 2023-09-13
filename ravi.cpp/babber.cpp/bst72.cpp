#include <bits/stdc++.h> 
    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };


//*************************************************************
//Q-1 : Merge 2 BST (method-1)
void inorder(TreeNode<int> *root, vector<int> &in){
    //base csae
    if(root == NULL){
        return;
    }

    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

vector<int> mergeArray(vector<int> &a, vector<int> &b){
    vector<int> ans(a.size() + b.size());
    int i=0 , j=0;
    int k=0; 

    while(i<a.size() && j<b.size()){
        if(a[i] < b[j]){
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }

    while(i<a.size()){
        ans[k++] = a[i];
        i++;
    }

    while(j<b.size()){
        ans[k++] = b[j];
        j++;
    }

    return ans;
}

TreeNode<int>* inorderToBST(int s, int e, vector<int> &in){
    //base case
    if(s>e){
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(in[mid]);
    root->left = inorderToBST(s, mid-1, in);
    root->right = inorderToBST(mid+1, e, in);
}


TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // step-1 : store node in vector
    vector<int> bst1, bst2;
    inorder(root1, bst1);
    inorder(root2, bst2);

    //step-2 : merge 2 sorted array
    vector<int> mergeArrays = mergeArray(bst1, bst2);

    // step-3 : convert Inorder to BST
    int s=0;
    int e=mergeArrays.size()-1;
    return inorderToBST(s, e, mergeArrays);
}

//**************************************************************
//method -2 (pendding)
//https://www.codingninjas.com/codestudio/problems/h_920474?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
#include <bits/stdc++.h> 


    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

void convertBSTtoSortedDLL(TreeNode<int> *root, TreeNode<int>* &head){
    //base case
    if(root == NULL){
        return;
    }

    convertBSTtoSortedDLL(root->right, head);
    root->right = head;

    if(head != NULL)
       head ->left = root;

    head = root;
    convertBSTtoSortedDLL(root->left, head);  
}


TreeNode<int>* mergeTwoSortedLL(TreeNode<int>*head1, TreeNode<int>* head2){
    TreeNode<int>* head = NULL;
    TreeNode<int>* tail = NULL;

    while(head1 != NULL && head2 != NULL){
        if(head1->data <head2->data){
            if(head1 == NULL){
               head = head1;
               tail = head1;
               head1 = head1->right;
            }
            else{
                tail->right = head1;
                head1->left = tail;
                tail = head1;
                head1 = head1->right;
            }

        }
        else{
            if(head2 == NULL){
               head = head2;
               tail = head2;
               head2 = head2->right;

            }
            else{
                tail->right = head2;
                head2->left = tail;
                tail = head2;
                head2 = head2->right;
                
            }

        }
    }

    while(head1 != NULL){
        tail->right = head1;
        head1->left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2 != NULL){
        tail->right = head2;
        head2->left = tail;
        tail = head2;
        head2 = head2->right; 
    }

    return head;
}

int countNodes(TreeNode<int>* &head){
    int count = 0;
    TreeNode<int>* temp = head;
    while(temp != NULL){
        count++;
        temp = temp->right;
    }
    return count;
}


TreeNode<int>* sortedLLtoBST(TreeNode<int>* &head, int n){
    // base case
    if(n<=0 || head == NULL){
        return NULL;
    }

    TreeNode<int>* leftTree = sortedLLtoBST(head, n/2);
    TreeNode<int>* root = head;
    root->left = leftTree;
    head = head->right;
    head->right = sortedLLtoBST(head, n-(n/2+1));

    return root;
}

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    // step-1 : convert BST into sorted DLL
    TreeNode<int>* head1 = NULL;
    convertBSTtoSortedDLL(root1,head1);
    head1->left = NULL;

    TreeNode<int>* head2 = NULL;
    convertBSTtoSortedDLL(root2,head2);
    head2->left = NULL;
   
    //step-2 : merge 2 sorted array
    TreeNode<int>* heads = mergeTwoSortedLL(head1, head2);
   
    // step-3 : convert Inorder to BST
    return sortedLLtoBST(heads, countNodes);
    
}