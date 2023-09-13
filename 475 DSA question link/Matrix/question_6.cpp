//*****************************************************
//Q-1 : Row with max 1s
#include <bits/stdc++.h> 
//Approach-1   (T.C ->N*M)
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    for(int j=0; j<m; j++){
	        for(int i=0; i<n; i++){
	            if(arr[i][j]== 1){
	                return i;
	                break;
	            }
	        }
	    }
	    return -1;
	    
	}

};

//Approach-2   (T.C ->N*logM)

class Solution{
public:
    int lowerBound(vector<int> arr, int m , int x){
        int low = 0;
        int high = m-1;
        int ans = m;
        
        while(low<=high){
            int mid = (low + high)/2;
            if(mid>=x){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }


	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   int maxCount = 0;
	   int index = -1;
	   
	   for(int i=0; i<n; i++){
	       int oneCount = m - lowerBound(arr[i], m, 1);
	       if(oneCount > maxCount){
	           maxCount = oneCount;
	           index = i;
	       }
	   }
	   return index;
	    
	}

};