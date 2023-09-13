//*****************************************************
//Q-1 :   reverse string
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(string &str , int k){
    int s = 0;
    int e = k-1;
    while(s<=e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
}
int main(){
    string str = "abcd";
    int k = str.size();
    solve(str , k);
    cout<<str;

}

//Approach-2
class Solution
{  
    public:
    void solve(string &str){
        
        int n = str.length();
        for(int i=0; i<n/2; i++){
            swap(str[i], str[n-i-1]);
        }
    }
    string reverseWord(string str)
    {
      solve(str);
      return str;
    }
};
