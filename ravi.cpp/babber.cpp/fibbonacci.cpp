#include<iostream>
using namespace std;
void fibbo(int n){
  int f[n];
  f[0] = 0;
  f[1] = 1 ;

  int i ;
  for( i = 2; i<=n ; i++){
    f[i] = f[i-1] + f[i-2];  
  }

  for (i = 0; i < n; i++) {
      cout<<f[i]<<" ";
   }
}

int fibbonacci(int n){
  int f[n ];
  f[0] = 0;
  f[1] = 1 ;
  int i ;
  for( i = 2; i<=(n) ; i++){
    f[i] = f[i-1] + f[i-2];
    
  }
  return f[n];
}

int main(){
 int n ;
 cin>>n;
 fibbo(n);
 cout<<endl;
 cout<<fibbonacci(n);
}


