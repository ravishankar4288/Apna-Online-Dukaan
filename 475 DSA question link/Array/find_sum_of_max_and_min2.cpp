
#include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    	int maxi = A[0];
    	int mini = A[0];
    
    	for(int i = 0 ; i<N ; i++){
    	    if(A[i] > maxi){
    	        maxi = A[i];
    	    }
    	    
    	    if(A[i] < mini){
    	        mini = A[i];
    	    }
    	}
    	
    	int sum = maxi + mini;
    	return sum;
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;

 
	int arr[10] = {3,7 ,2 ,9 ,8};
	// sort(arr.begin() , arr.end());
	std::sort(std::begin(arr), std::end(arr));
}

// } Driver Code Ends