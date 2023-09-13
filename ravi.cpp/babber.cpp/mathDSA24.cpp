#include<iostream>
using namespace std;

/*
// Q-1 : Check prime number or not 
bool isprime(int n){
    if(n<2){
        return 0;
    }
    for(int i = 2 ; i<n ; i++ ){
        if(n%i == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int n;
    cout<<"Write your number : "<<endl;
    cin>>n;

    if(isprime(n)){
        cout<<"this is prime number "<<endl;
    }
    else{
        cout<<"this is not prime number : "<<endl;
    }

}   */


/*
// Q-2 : Count prime number b/w 1 to n
bool isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i = 2 ; i<n ; i++ ){
        if(n%i == 0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int countprime(int n){
    int count = 0 ; 
    for(int i=2 ; i<n ; i++){
        if(isprime(i)){
            count++;
        }
        return count ;
    }
    
}
int main(){
    int n; 
    cout<<"write your number : "<<endl;
    cin>>n;
    int ans = countprime(n);
    cout<<"total number of prime number is ; "<<ans<<endl;
    
}
      */


/*
//Q-3 : GCD/HCF of two element code      
int gcd(int a , int b){
while (a != b){   
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
if(a>b){
       a = a-b;
}  
else{
    b=b-a;
} 
return a;
return b;
}
}

int main(){
    int a, b;
    cout<<"enter your two number : "<<endl;
    cin>>a,b;
    int ans = gcd(a,b);
    cout<<"this is the gcd of a and b : "<<ans<<endl;
}
      */



/*
//Q-4 : Modular exponentiation    
int modularExponentiation(int x , int n , int m){
    int res = 1;
    while(n>0){
        if(n&1){    // its means odd number 
          res =( (res) * (x)%m)%m ;
        }
        x = ( (x)%m * (x)%m)%m ;
        n = n>>1 ;  // its means n = n/2
    }
    return res;
}

int main(){
    int x , n , m;
    cout<<"enter your all component : "<<endl;
    cin>>x,n,m;
    int ans = modularExponentiation(x,n,m);
    cout<<" (x^n)%m = "<<ans;
}   */


