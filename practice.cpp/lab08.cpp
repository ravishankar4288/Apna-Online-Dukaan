
// Online C++ compiler to run C++ program online
#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int helper( string s1 , string s2 , int **output){
	int m = s1.size();
	int n = s2.size();

	if(m==0||n==0){
		return max( m , n);
	}
	if(output[m][n]!=-1){
		return output[m][n];
	}
	int ans;
	
	if(s1[0] == s2[0]) {
		ans = helper(s1.substr(1), s2.substr(1), output);
	}
	else {
		// Insert
		int x = helper(s1.substr(1), s2, output) + 1;
		// Delete
		int y = helper(s1, s2.substr(1), output) + 1;
		// Replace
		int z = helper(s1.substr(1), s2.substr(1), output) + 1;

		ans =  min(x, min(y, z));
	}
	output[m][n] = ans;

	return ans;
}

int editDistance(string s1, string s2)
{
	//Write your code here
	int m = s1.size();
	int n = s2.size();

	int **ans = new int*[m+1];
	for(int i=0 ; i<=m ; i++){
		ans[i] = new int[n+1];
		for(int j=0 ;j<=n;j++){
			ans[i][j] = -1;
		}
	}
	return helper( s1 ,s2 , ans);
}

int main()
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	cout << editDistance(s1, s2) << endl;
}