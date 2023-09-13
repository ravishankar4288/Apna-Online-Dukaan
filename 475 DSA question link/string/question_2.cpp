//*****************************************************
//Q-1 :  check Palindrome String
#include <bits/stdc++.h> 
class Solution{
public:	
	int isPalindrome(string S)
	{
	    int n = S.length();
	    int i = 0;
	    int j = n-1;
	    
	    while(i<=j){
	        if(S[i]==S[j]){
	            i++;
	            j--;
	        }
	        else{
	            return 0;
	            break;
	        }
	    }
	    
	    return 1;
	}

};