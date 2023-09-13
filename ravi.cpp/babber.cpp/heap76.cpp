#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

//***********************************************************************
//Q-1 : K-th Largest Sum of subarray
//Method-1 :
#include<algorithm>
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> storeSubArray;
	int n = arr.size();
	for(int i=0 ; i<n ; i++){
		int sum = 0;
		for(int j=i ; j<n ; j++){
			sum = sum + arr[j];
			storeSubArray.push_back(sum);
		}
	}

	sort(storeSubArray.begin(), storeSubArray.end());

	return storeSubArray[storeSubArray.size()-k];
}


//Method-2 :
#include<queue>
int getKthLargest(vector<int> &arr, int k)
{
	priority_queue<int, vector<int>, greater<int>> minHeap;
    int n = arr.size();
	for(int i=0 ; i<n ; i++){
		int sum = 0;
		for(int j=i ; j<n ; j++){
			sum = sum + arr[j];

			if(minHeap.size() < k){
				minHeap.push(sum);
			}
			else{
				if(sum > minHeap.top()){
					minHeap.pop();
					minHeap.push(sum);
				}
			}
		}
	}
	return minHeap.top();
}



//***********************************************************************
//Q-2 : merge k sorted Arrays

#include <bits/stdc++.h>
class node{
    public:
    int data;
    int i;  // i ->denote as row
    int j;  // j ->denoate as col

    node(int data, int row , int col){
        this->data = data;
        i = row;
        j = col;
    }
}; 

class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data >b->data;
    }
};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node* , vector<node*>, compare> minHeap;

    //step-1 : sare array ke 1st element ko push karo
    for(int i=0 ; i<k ; i++){
        node* temp = new node(kArrays[i][0], i, 0);
        minHeap.push(temp);
    }

    vector<int> ans;

    //step-2
    while(minHeap.size() > 0){
        node* temp = minHeap.top();
        ans.push_back(temp->data);
        minHeap.pop();

        int i = temp->i;
        int j = temp->j;

        if(j+1 < kArrays[i].size()){
            node* next = new node(kArrays[i][j+1], i, j+1);
            minHeap.push(next);
        }
    }
    return ans;
}
