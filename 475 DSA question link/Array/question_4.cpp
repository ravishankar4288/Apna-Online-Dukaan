//*****************************************************
//Q-1 : Sort an array of 0s, 1s and 2s
#include <bits/stdc++.h>
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int zero = 0;
        int one = 0;
        int two = 0;
        
        for(int i=0; i<n; i++){
            if(a[i]== 0)
             zero++;
             
             if(a[i]== 1)
             one++; 
             
             if(a[i]== 2)
             two++;
        }

        for(int i=0; i<zero; i++){
          a[i] = 0;
        }
       
        for(int i=zero; i<(one+zero); i++){
          a[i] = 1;
        }
       
        for(int i=(one+zero); i<(zero+one+two); i++){
          a[i] = 2;
        }            
    }
    
};

