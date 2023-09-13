#include<iostream>
using namespace std;

//***********************************************************************
//Q-1 : Trie implement
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isterminal;

    TrieNode(char ch){
        data = ch;
        for(int i=0 ; i<26 ; i++){
            children[i] = NULL;
        }
        isterminal = false;
    }
};


class Trie {
    TrieNode* root;

public:

    /** Initialize your data structure here. */
    Trie() {
    root = new TrieNode('\0');
    }

    /** Inserts a word into the trie. */
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isterminal = true;
            return;
        }

        //assumption word will be in capital
        int index = word[0]-'a';
        TrieNode* child;
        
        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        //recursion use
         insertUtil(child, word.substr(1));
    } 

    void insert(string word) {
        insertUtil(root,word);
    }

    /** Returns if the word is in the trie. */
     bool searchUntil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return root->isterminal;
        }

        int index = word[0]-'a';
        TrieNode* child ;

        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //retusion
        return searchUntil(child,word.substr(1));
    }
    bool search(string word) {
        return searchUntil(root, word);

    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
     bool searchPrefix(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            return true;
        }

        int index = word[0]-'a';
        TrieNode* child ;

        // present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return false;
        }

        //retusion
        return searchPrefix(child,word.substr(1));
    }
    bool startsWith(string prefix) {
        return searchPrefix(root, prefix);

    }
};



//***************************************Method-2*********************************
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    int countChild;
    bool isterminal;
    
    TrieNode(char ch){
        data = ch;
        for(int i=0 ;i<26 ;i++){
            children[i] = NULL;
        }
        
        isterminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;
    
    Trie(char ch){
        root = new TrieNode(ch);
    }
    
    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root->isterminal = true;
            return;
        }

        //assumption word will be in capital
        int index = word[0]-'a';
        TrieNode* child;
        
        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            child = new TrieNode(word[0]);
            root->countChild++;
            root->children[index] = child;
        }

        //recursion use
        insertUtil(child, word.substr(1));
    } 

    void insertWord(string word){
        insertUtil(root,word);
    }  
    
    void lcp(string str, string &ans){
        for(int i=0 ; i<str.length() ; i++){
            char ch = str[i];
            
            if(root->countChild == 1){
                ans.push_back(ch);
                int index = ch - 'a';
                root = root->children[index];
            }
            else{
                break;
            }

            if(root->isterminal){
                break;
            }
        }
    }

};


string longestCommonPrefix(vector<string> &arr, int n)
{
   Trie* it = new Trie('\0');
   
   //insert all string in Trie
   for(int i=0 ; i<n ; i++){
       it->insertWord(arr[i]);
   }
   
   string first = arr[0];
   string ans = "";
   it->lcp(first, ans);
   return ans;
}


