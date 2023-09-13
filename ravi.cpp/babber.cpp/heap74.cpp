#include<iostream>
#include<queue>
using namespace std;
class heap{
    public:
    int arr[1000];
    int size ;

    heap (){
        arr[0] = -1;
        size = 0;

    }

//insertion in heap
    void insert(int val){
        size = size + 1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;
            if(arr[parent] < arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            return;
        }
    }


//deletion in heap 
void deletefromHeap(){
    //base case 
    if(size == 0){
        cout<<"Heap is empty "<<endl;
        return;
    }
    
    //step-1 : swap last node from 1st node 
    arr[1] = arr[size];

    //step-2 ; last element remove
    size--;

    //step-3 : replace root node on correct position 
    int i = 1;
    while(i<size){
        int leftindex = 2*i;
        int rightindex = 2*i+1;

        if(leftindex < size && arr[i] < arr[leftindex]){
            swap(arr[i], arr[leftindex]);
            i = leftindex;
        }

        else if(rightindex < size && arr[i] < arr[rightindex]){
            swap(arr[i], arr[rightindex]);
            i = rightindex;
        }
        else{
            return;
        }
    }

}    


// Heapify algorithm  (for zero index level)
void heapify(int arr[], int n, int i){
    int largest = i;
    int leftNode = 2*i;
    int rightNode = 2*i + 1;

    if(leftNode <= n && arr[largest] < arr[leftNode]){
        largest = leftNode;
    }

    if(rightNode <= n && arr[largest] < arr[rightNode]){
        largest = rightNode;
    }

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n , largest);
    }
}


//Heap sort 
void heapSort(int arr[], int n){
    int size = n;
    while(size > 1){
        //step-1 : swap
        swap(arr[size], arr[1]);

        //step-2 : remove last element
        size--;

        //step-3 : root->node ---->correct position  by heapify
        heapify(arr, size, 1);

    }
}
    
void print(){
    for(int i=1 ; i<=size ; i++){
        cout<<arr[i]<<" ";
    }
}
};


int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();

    cout<<endl;

    h.deletefromHeap();
    h.print();

    cout<<endl;
    int arr[] = {-1, 54, 53, 55, 52, 50};
    int n = 5;

    //heap creation 
    for(int i=n/2 ; i>0 ; i--){
        h.heapify(arr, n, i);
    }

    cout<<"after heapify heap "<<endl;
    for(int i=1 ; i<=n ; i++ ){
        cout<<arr[i]<<" ";
    }


    //Heap sort 
    cout<<endl<<"this is the heap sort "<<endl;
    h.heapSort(arr, n);
    for(int i=1 ; i<=n ; i++ ){
        cout<<arr[i]<<" ";
    }

//*************************************************************************
//priority queue
//for max heap
cout<<endl<<endl;
cout<<endl<<"this is the part of max heap by priority queue "<<endl;
priority_queue<int> pq;
pq.push(10);
pq.push(27);
pq.push(2);
pq.push(30);
pq.push(29);

cout<<"top element is "<<pq.top()<<endl;
cout<<"size of max heap is "<<pq.size()<<endl;
pq.pop();
cout<<"top element is "<<pq.top()<<endl;
cout<<"size of max heap is "<<pq.size()<<endl;

if(pq.empty()){
    cout<<"haep is empty "<<endl;
}
else{
    cout<<"heap is not empty "<<endl;
}


//for max heap
cout<<endl<<endl;
cout<<endl<<"this is the part of min heap by priority queue "<<endl;
priority_queue<int, vector<int>, greater<int>> mpq;
mpq.push(10);
mpq.push(27);
mpq.push(2);
mpq.push(30);
mpq.push(29);

cout<<"top element is "<<mpq.top()<<endl;
cout<<"size of max heap is "<<mpq.size()<<endl;
mpq.pop();
cout<<"top element is "<<mpq.top()<<endl;
cout<<"size of max heap is "<<mpq.size()<<endl;

if(mpq.empty()){
    cout<<"haep is empty "<<endl;
}
else{
    cout<<"heap is not empty "<<endl;
}



}