#include<iostream>
#include<queue>
using namespace std;
int main(){
    //create queue
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"front element of queue is :"<<q.front()<<endl;

    cout<<"size of queue : "<<q.size()<<endl;
    q.pop();
    q.pop();
    cout<<"size of queue : "<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty "<<endl;
    }
    else{
        cout<<"queue is not empty "<<endl;
    }
}



//********************************************************************
//Q-1 : implement queue by array
#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
public:
    Queue() {
        size = 10000001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront == rear){
            return true;
        }
        else{
            return false;
        }
        
    }

    void enqueue(int data) {
        if(rear == size ){
            cout<<"queue is full"<<endl;;
        }
        else{
            arr[rear] = data;
            rear++;
        }
        
    }

    int dequeue() {
        if(qfront == rear){
            return -1;
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
        
    }

    int front() {
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
        
    }
};



//***********************************************
//Q-2 : Implement circular queue
#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1; 
        
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //check queue is empty or not 
        if((front==0 && rear == size-1) || (rear ==(front-1))){
            return false;
        }
        else if(rear == -1){ // to push 1st element
            front = rear = 0;
        }
        else if(rear == size-1 && front !=0){
            rear = 0;
        }
        else{
            rear++;
        }

        arr[rear] =value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // check queue is underflow or not 
        if(front == -1){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ // for single element 
            front = rear = -1; // to maintin property of circular queue
        }
        else if(front == size-1){
            front =0;
        }
        else{
            front++;
        }

        return ans ;


    }
};