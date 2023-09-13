#include<iostream>
#include<queue>
using namespace std;

//*********************************************************************************
// Q-7 : Implement K queue in an array
class kQueue{
    public:
    int n;
    int k;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freespot;

    kQueue(int n , int k){
        this ->n=n;
        this ->k=k;
        freespot = 0;
        front = new int[k];
        rear = new int[k];
        for(int i=0 ; i<k ;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        for(int i=0 ; i<n ; i++){
            next[i] = i+1;
        }
        next[n-1] = -1;
        arr = new int[n];
    }

//push operation 
void enqueue(int data , int qn){
    //check overflow condition
    if(freespot == -1){
        cout<<"No empty sppce is present : "<<endl;
        return;
    }

    //find index where we want to insert data
    int index = freespot;

    //update freespot 
    freespot = next[index];

    //check whether 1st element insert
    if(front[qn -1] == -1){
        front[qn-1] = index;
    }
    else{
        //link new element to the prev element
        next[rear[qn-1]] = index;
    }

    //update next
    next[index] = -1;

    //update rear
    rear[qn-1] = index;

    //push element in array 
    arr[index] = data;
}

//pop opreation 
int dequeue(int qn){
    //check underflow condition
    if(front[qn-1] == -1) {
        cout<<"queue is empty : "<<endl;
        return -1;
    }

    //find index for pop element
    int index = front[qn-1];

    //front ko update karo pop element
    front[qn-1] = next[index];

    //freespot ko manage karo
    next[index] = freespot;
    freespot = index;

    return arr[index];

}

};

/*
int main() {
    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15,1);
    q.enqueue(20, 2);
    q.enqueue(25,1);

    cout << q.dequeue(1) << endl;
    cout << q.dequeue(2) << endl;
    cout << q.dequeue(1) << endl;
    cout << q.dequeue(1) << endl;

 return 0;
}          */


//*************************************************************************************************************
//Q-8 : sum of minimum and maximum eleemnt of all subarrays of size k
int solve(int *arr , int n , int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    //addition first k size of window
    for(int i=0 ; i<k ; i++){
        while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans = 0;
    ans += arr[maxi.front()] + arr[mini.front()];
    for(int i=k ; i<n ; i++){
    
        //for next window
        //removal 
        while(!maxi.empty() && i-maxi.front() >=k){
            maxi.pop_front();
        }

        while(!mini.empty() && i-mini.front() >=k){
            mini.pop_front();
        }

        //addition 
        while(!maxi.empty() && arr[maxi.back()] <=arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);   

        ans += arr[maxi.front()] + arr[mini.front()];     
    }

    return ans ;
}

int main(){
   int  arr[7] = {2,5,-1,7,-3,-1,-2};
   int k=3;
   int ans = solve(arr , 7 ,k);
   cout<<"sum of minimum and maximum eleemnt of all subarrays : "<<ans<<endl;
}


