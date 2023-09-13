#include<bits/stdc++.h>
using namespace std;
int main(){

string s1 = "ravishankar";
cout<<"s1-> "<<s1<<endl;

string s2 ="";
int n = s1.length();

// s2.insert(0, s1);
// s2.insert(n, s1);

s2 = s1 + s1;

cout<<"s2-> "<<s2<<endl;
}