#include<iostream>
using namespace std;
#include<stack>

//****************************************************************
//Q-1 : get minimum value 

class SpecialStack {
    stack<int> s;
    int mini;
    /*----------------- Public Functions of SpecialStack -----------------*/
    public:
        
    void push(int data) {
        // for first element 
        if(s.empty()){
            s.push(data);
            mini = data;
        }
        //for remaning element 
        else{
            if(data<mini){
                int val = 2*data - mini;
                s.push(val);
                mini = data;
            }
            else{
                s.push(data);
            }
        }
    }

    int pop() {
        //check underflow condition
        if(s.empty()){
            return -1;
        } 

        int curr = s.top();
        s.pop();
        if(curr>mini){
            return curr;
        }
        else{
            int premini = mini;
            int val = 2*mini - curr;
            mini = val;
            return premini;
        }
    }

    int top() {
        if(s.empty()){
            return -1;
        }
        int curr = s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty() {
       return s.empty();
    }

    int getMin() {
        if(s.empty()){
            return -1;
        }
        else{
            return mini;
        }
    }  
};