//*****************************************************
//Q-1 : Common elements  
#include <bits/stdc++.h>
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //Approach-1
            unordered_map<int, int> m1;
            unordered_map<int, int> m2;
            unordered_map<int, int> m3;
            
            for(int i=0; i<n1; i++){
                m1[A[i]]++;
            }
            
            for(int i=0; i<n2; i++){
                m2[B[i]]++;
            }
            
            for(int i=0; i<n3; i++){
                m3[C[i]]++;
            }
            
            vector<int> ans;
            for(int i=0; i<n1; i++){
                if(m1[A[i]] && m2[A[i]] && m3[A[i]]){
                    ans.push_back(A[i]);
                    //its means A[i] wala element false ho gya 
                    //and repeating same value is not allowed
                    m1[A[i]]=0;
                }
            }           
            return ans;
        }

        
        //Approach-2
            vector<int> ans;
            int i=0, j=0, k=0;
            
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                
                else if(A[i]<B[j]){
                    i++;
                }
                  
                else if(B[j] < C[k]){
                    j++;
                }
                else{
                    k++;
                }
                
                int x = A[i-1];
                while(A[i] == x){
                    i++;
                }
                
                int y = B[j-1];
                while(B[j] == y){
                    j++;
                }
                
                int z= C[k-1];
                while(C[k]== z){
                    k++;
                }
            }
            if(ans.size() !=0 )
               return ans;

        
};

