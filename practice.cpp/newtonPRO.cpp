#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void luckyPairs(int a , int b , int c){
  
    if(((a+b)%2==0 && (a+b)>=0) || ((b+c)%2==0 && (b+c)>=0) || ((a+c)%2==0 && (a+c)>=0)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
	int a , b, c;
    cin>>a>>b>>c;
    luckyPairs(a,b,c);
    return 0;
}