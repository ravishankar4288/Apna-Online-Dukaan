//*****************************************************
//Q-1 :   Merge Without Extra Space
#include <bits/stdc++.h>
class Solution{
    private:
    void sortArrays(long long arr1[], long long arr2[], int i, int j){
        if(arr1[i] > arr2[j])
           swap(arr1[i], arr2[j]); 
    }   
    public:  
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here
            //Approch-1
            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++){
                    if(arr1[i] > arr2[j]){
                        swap(arr1[i], arr2[j]);
                    }
                }
            }
            sort(arr2, arr2+m);
            

            //Approch-2
            int len = n+m;
            int gap = (len/2) + (len%2);
            while(gap > 0){
                
                int left = 0;
                int right = gap + left;
                
                while(right < len){
                    if(left<n && right>=n){
                        sortArrays(arr1, arr2, left, right-n);
                    }
                    else if(left >= n ){
                        sortArrays(arr2, arr2, left-n, right-n);
                    }
                    else{
                        sortArrays(arr1, arr1, left, right);
                    }
                    left++;
                    right++;
                }
                
                if(gap == 1) break;
                gap = (gap/2) + (gap%2);   
   
            }
        } 
};
