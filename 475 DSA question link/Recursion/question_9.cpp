//*****************************************************
//Q-1 : Check If Binary Representation of a Number is Palindrome
#include <bits/stdc++.h> 
void convertBinary(long long n, string &str){

  while (n>0) {
    char ch = n % 2;
    str += ch;
    n = n / 2;
  }
}

bool solve(string &str){
	//base case
	int start = 0 ; 
	int end = str.size()-1 ;

	while(start<end){

		if(str[start]!=str[end]){
			return false ; 
		}
		else{

		}
		start++;
		end--; 
	} 
	
}
bool checkPalindrome(long long N)
{
	string str = "";
	convertBinary(N, str) ; 
	
	return solve(str);
}