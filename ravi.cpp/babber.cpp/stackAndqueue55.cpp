// some important question of stack 
#include<iostream>
#include<stack>
using namespace std;


//Q-2 : delete middle element of stack
void solve(stack<int>&inputStack, int count , int size ){
   // base case 
   if(count == size/2){
      inputStack.pop();
      return;
   }

   int num = inputStack.top();
   inputStack.pop();

   // recursive call
   solve(inputStack , count+1,size);

   inputStack.push(num);

}
#include <bits/stdc++.h> 
void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int count = 0;
   solve(inputStack , count , N);
   
}


//************************************************************************************
//Q-3 ; valid parentheis
bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    
    for(int i = 0 ; i<expression.length() ; i++ ){
        char ch = expression[i];

        //for opening bracket push in stack
        //for closing bracket pop element and compare top
        if(ch == '[' || ch == '(' || ch == '{'){
            s.push(ch);
        }
        else{
            //for closing bracket
            if (!s.empty()) {
              char top = s.top();
              if ((ch == ']' && top == '[') || (ch == '}' && top == '{') ||
                  (ch == ')' && top == '(')) {
                s.pop();
              } 
              else {
                return false;
              }
            }
             else {
              return false;
            }
            }
        }
        if(s.empty()){
        return true;
        }
        else{
            return false;
        }
    
}



//**********************************************************************************************
//Q-4 : insert an element at its bottom in A given stack
void solve(stack<int>& s, int x){
    //base case
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recurive call
    solve(s,  x);

    s.push(num);
}
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack , x);
    return myStack;
}


//*******************************************************************************
//Q-5 : reverse stack using recursion
void insertAtbottom(stack<int> &s , int x){
    //base case 
    if(s.empty()){
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    insertAtbottom(s,x);

    s.push(num);
}
void reverseStack(stack<int> &stack) {
    // Write your code here
    // base case 
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    //recursive call for reverse stack(n-1)
    reverseStack(stack);

    insertAtbottom(stack , num);
}


//*********************************************************************************
//Q-6 :stack sort by recursion
void sortedElement(stack<int> &s , int x){
	//base case
	if(s.empty() || (!s.empty() && s.top() < x)){
		s.push(x);
		return;
	}

	int num = s.top();
	s.pop();

	//recursive call
	sortedElement(s,x);

	s.push(num);
}
#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	//base case
	if(stack.empty()){
		return ;
	}

	int num = stack.top();
	stack.pop();

	//recursive call
	sortStack(stack);

	sortedElement(stack , num);
}


//****************************************************************************
//Q-7 : check Reduntant bracket or not 
#include <bits/stdc++.h>
#include<stack> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
      char ch = s[i];
    

    if(ch=='('|| ch=='+'|| ch=='-'|| ch=='*'|| ch=='/'){
        st.push(ch);
    }
    else{
        if(ch ==')'){
           bool isreduntant = true;
           while(st.top() != '('){
               char top = st.top();
               if(top=='('|| top=='+'|| top=='-'|| top=='*'|| top=='/'){
                   isreduntant = false;
               }
               st.pop();
           }
           if (isreduntant == true){
             return true;
           }
           else{
             st.pop();
           }
           
        }
        }
    }
    return false;
    }

//*******************************************************************
//Q-8 : minimum cost to make sring valid 
#include <bits/stdc++.h> 
#include<stack>
int findMinimumCost(string str) {
  // Write your code here
  if(str.length()%2 == 1){
    return -1;
  }

stack<char>s;
  for(int i=0 ; i<str.length() ; i++){
    char ch = str[i];

    if(ch == '{'){
      s.push(ch);
    } else {
      if (s.top() == '{' && !s.empty()){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
 //stack contains invalid expression
 int a = 0;
 int b = 0;
 while (!s.empty()) {
   if (s.top() == '{'){
     b++;
   }
   else{
     a++;
     
   }
   s.pop();
 }
 int ans = (a+1)/2 + (b+1)/2;
 return ans ;
}


int main(){

    // Q-1 : reverse given string 
    string  str = "babbar";
    stack<char> s;

    for(int i = 0 ; i<str.length() ; i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(! s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"reverse string : "<<ans<<endl;
    
    return 0;
}











