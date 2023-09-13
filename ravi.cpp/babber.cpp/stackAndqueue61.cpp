#include<iostream>
#include<stack>
#include<queue>
using namespace std;

//******************************************
//Q-1 : queue reversed
queue<int> rev(queue<int> q)
{
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    return q;
}


//****************************************************************************************************************
//Q-2 : find First negative integer in every window of size k
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
    deque<long long int> dq;
    vector<long long> ans;
    
    //for 1st window 
    for(int i = 0 ; i<K ; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    //push ans for 1st window
    if(dq.size()>0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }
    
    //now process for remaining windows
        for(int i = K; i<N; i++) {
            
            //first pop out of window element
            if(!dq.empty() && (i - dq.front())>=K ) {
             dq.pop_front();
            }
        
        
    //then push current element
             if(A[i] < 0)
                dq.push_back(i); 
          
         
    // put in ans
            if(dq.size() > 0) {
                 ans.push_back(A[dq.front()]);
            }
            else
            {
                ans.push_back(0);
            }
        }
         return ans;            
 }



 //**********************************************************************************************
 //Q-3 : Reverse First K elements of Queue
queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;
    
    //first k element push in stack
    for(int i=0 ; i<k ; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    //push all element of stack in queue 
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    int t = q.size() - k;
    
    //first n-k element of queue push_ back in queue
    for(int i=0 ; i<t ; i++){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    
    return q;
}


//****************************************************************************
//Q-4 : First non-repeating character in a stream

queue<int> modifyQueue(queue<int> q, int k) {
    
    stack<int> s;
    
    //first k element push in stack
    for(int i=0 ; i<k ; i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    //push all element of stack in queue 
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    int t = q.size() - k;
    
    //first n-k element of queue push_ back in queue
    for(int i=0 ; i<t ; i++){
        int element = q.front();
        q.pop();
        q.push(element);
    }
    
    return q;
}


//****************************************************************************************************************
//Q-5 : Circular tour

#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution{
  public:
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       int deficit = 0;
       int balance = 0;
       int start = 0;
       
       for(int i=0 ; i<n ; i++){
           balance += p[i].petrol - p[i].distance ;
           
           if(balance < 0){
               deficit += balance;
               balance =0;
               start = i+1;
           }
       }
       
       if(balance + deficit >= 0){
           return start;
       }
       else{
           return -1;
       }
    }
};


//******************************************************************************
//Q-6 :Interleave The First Half Of The Queue With The Second Hal
//Approach-1:
#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> q1;
    int t = q.size();
    for(int i=0 ; i<t/2 ; i++){
        int element = q.front();
        q.pop();
        q1.push(element);
    }

    while(!q1.empty()){
        int element = q1.front();
        q1.pop();
        q.push(element);

        int val = q.front();
        q.pop();
        q.push(val);
    }
}

//Approach -2:
#include <bits/stdc++.h> 
#include<stack>
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
stack<int>s;
int t = q.size();
//queue to stack
for(int i=0 ; i<t/2 ; i++){
    int element = q.front();
    q.pop();
    s.push(element);
}

//stack to queue
for(int i=0 ; i<t/2 ; i++){
    int element = s.top();
    s.pop();
    q.push(element);
}

//in queue half 1st element pop and push 
for(int i=0 ; i<t/2 ; i++){
    int element = q.front();
    q.pop();
    q.push(element);
}

// 1st half element push into stack
for(int i=0 ; i<t/2 ; i++){
    int element = q.front();
    q.pop();
    s.push(element);
}

while(!s.empty()){
    int val = s.top();
    s.pop();
    q.push(val);

    val = q.front();
    q.pop();
    q.push(val);
}
}