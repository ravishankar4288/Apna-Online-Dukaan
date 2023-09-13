//*****************************************************
//Q-1 : reverse a string  using recursion
#include <bits/stdc++.h>
void solve(string &str, int start, int end){
	//base case
	if(start>end){
		return;
	}

	swap(str[start], str[end]);

	solve(str, start+1, end-1);

}
string reverseString(string str)
{
	int n = str.length();
	int start = 0;
	int end = n-1;
	solve(str, start, end);
	return str;
}