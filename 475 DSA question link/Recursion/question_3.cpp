//*****************************************************
//Q-1 : say digit in ehglish
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void saydigit(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }

    int digit = n%10;
    n = n/10;
    saydigit(n, arr);
    cout<<arr[digit]<<" ";
}


int main(){
    int n;
    cout<<"write your number "<<endl;
    cin>>n;
    string arr[10] = {"zero ","one ","two ","three ","four "," five ","six ","seven ","eight ","nine "};
    cout<<endl;
    saydigit(n, arr);
    cout<<endl;

}