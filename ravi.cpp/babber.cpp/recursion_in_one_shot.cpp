#include<iostream>
using namespace std;



// find counting
void getcounting(int n){
    // base condition
    if(n==0)
    return ;

    // // recursive call
    // getcounting(n-1);
    // cout<<n<<"  ";

   cout<<n<<"  ";
   getcounting(n-1);
}

int main(){
    int n ;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    //cout<<"counting is 1 to n : "<<endl;
    cout<<"counting is n to 1 : "<<endl;
    
    getcounting(n);
    
}    

// find factorial of n
int getfactorial( int n){

    if (n==1)
    return 1;

    int ans = n* getfactorial (n-1);
    return ans;
 
}

int main(){
    int n ; 
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"factorial of n is : "<<endl;
    cout<<getfactorial(n);
}   
          
        


//fibbonacci number;
int getfibbo(int n){
    if (n==0 || n==1)
    return n;
    int fibbo = ((n-1)+(n-2));
    getfibbo(n-1);
    return fibbo;
}
int main(){
    int n ; 
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"fibbonacci number at n term : "<<endl;
    cout<<getfibbo(n);
}   
        

// write digit english name 
void getname(int n , string str[]) {
  if(n==0)
  return ;
  getname(n/10,str);
  int ans = n%10;
  cout<<(str[ans])<<" ";
}   
int main(){
int n ;
cout<<"enter the value of n : "<<endl;
cin>>n;
string str[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
cout<<"Answer is english is : "<<endl;
getname(n , str);
}