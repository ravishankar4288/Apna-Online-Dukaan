#include<iostream>
using namespace std;
int main(){
  int a,b,c;
   cout<<"Enter the value a:"<<endl;
   cin>>a;

   cout<<"Enter the value b:"<<endl;
   cin>>b;

  cout<<"Enter the value c:"<<endl;
  cin>>c;
  if (a>=1 && b>=1 && c>=1 && a<=1000 && b<=1000 && c<=1000 ){

    cout<<"this is sum of a,b,c:"<<a+b+c<<endl;
  }
  else{
    cout<<"this is not possible :"<<endl;  
  }

  return 0;
}
    