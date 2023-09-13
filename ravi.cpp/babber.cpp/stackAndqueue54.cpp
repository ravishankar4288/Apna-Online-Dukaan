#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    // properties 
    int *arr;
    int size;
    int top;

    //behaviour 
    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element ){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"stack is overflow "<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"stack is underflow "<<endl;
        }
    }

    int peek(){
        if(top >= 0 ){
            return arr[top];
        }
        else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }

    bool isempty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};


//**********************************************************************************************
/*
class TwoStack {
    int *arr;
    int size;
    int top1;
    int top2;


public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this ->size = s;
        arr = new int[size];
        top1 = -1;
        top2 = size;

    }
    
    // Push in stack 1.
    void push1(int num) {
        // Write your code here.
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        // Write your code here.
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        // Write your code here.
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        // Write your code here.
          if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        } 
    }        */

int main(){

    /*
    //stack creation 
    stack<int>s;
    //push operation
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    //pop operation
    s.pop();
    s.pop();

    // check peak element 
    cout<<"peak element is : "<<s.top()<<endl;

    //check this stack empty or not 
    if(s.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty  "<<endl;
    }

    // check size of stack
    cout<<"size of stack is : "<<s.size()<<endl;  */




//*****************************************************************************
Stack s(5);

//element poeration
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);

//pop oerration
s.pop(); 
s.pop();
s.pop();
cout<<s.peek()<<endl;

s.pop();
cout<<s.peek()<<endl;

s.pop();
cout<<s.peek()<<endl;


if(s.isempty() ){
    cout<<"stack is empty "<<endl;
}
else{
    cout<<"stack is not empty "<<endl;
}



    
    return 0;
}