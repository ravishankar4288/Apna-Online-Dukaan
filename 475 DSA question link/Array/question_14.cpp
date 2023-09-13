//*****************************************************
//Q-1 :  Triplet Sum in Array
#include <bits/stdc++.h>
class Solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        
        for(int i=0; i<n; i++){
            int a = X - A[i];
            unordered_map<int, int> m;
            
            for(int j=i+1; j<n; j++){
            int b = a - A[j];
            if(m.find(b)!=m.end()){
                return true;
            }
            m[A[j]]++;
            }
        }
        
        return false;
    }

};

