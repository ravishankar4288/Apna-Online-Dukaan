
//Q-1 :

// stair promlem
#include<iostream>
using namespace std;
int jump(int n){
  // base case 
  if(n<0){
    return 0;
  }
  if(n==0){
    return 1;
  }

  // recursive relation
  if(n>=1 && n<=30){
  int ans = jump(n-1) + jump(n-2) + jump(n-3);
  return ans;
  }
  else{
    return 0;
  }
}
int main(){
  int n ;
  cout<<"enter your number : "<<endl;
  cin>>n;
  int ans = jump(n);
  if(ans == 0){
    cout<<"sorry this number is not belongs to this range [1,30] "<<endl;
  }
  else{
  cout<<" total number way is : "<<ans<<endl;
  }
}


//**************************************************************
//Q-2 :
#include<iostream>
using namespace std;

void solve(int n ){
  int i = 1;
  while(n>0 ){
  if(n <= i && n>=1){
      cout<<"patlu"<<endl;
      break;
  }
  else if ((n-i)<=i*2 && (n-i)>=1){
      cout<<"motu"<<endl;
      break;
  }
  else{
    n = (n-i)-i*2;  
    i++;  
  }
  }
}
int main(){
  int n ;
  cout<<"enter your number : "<<endl;
  cin>>n;
  cout<<"Winner is the : ";
  solve(n);

}


