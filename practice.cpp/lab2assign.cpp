
//Q-1
#include <bits/stdc++.h>
using namespace std;

// is palindrome
string isPalindrome(string S, int n)
{
int  i =0;
int j = n-1;

while(i<=j){
    if(S[i]!=S[j]){
        return "NO";
    }
    i++;
    j--;
}
return "yes";
}


int main()
{
	string S;
         cin>>S;
	int n = S.size();
	cout << isPalindrome(S,n);

	return 0;
}

//***********************************************************************************
//Q-2

#include<iostream>
using namespace std;
int calculatePower(int k, int n){
    if (n != 0)
        return (k*calculatePower(k, n-1));
    else
        return 1;
}

int main(){
  int k;
  cout<<"enter the value of k"<<endl;
  cin>>k;
  
  int n;
  cout<<"enter the value of n "<<endl;
  cin>>n;
  int ans =calculatePower(k,n);
  cout<<ans ;

}


