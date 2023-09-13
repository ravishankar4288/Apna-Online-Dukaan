#include<iostream>
using namespace std;

/*
// Recursin ---->> Q-1: find factorial problem
int factorial(int n ){

    // Base case
    if(n == 0){
        return 1;
    }
    // Recursive relation
    int small_prblem = factorial(n-1);
    int big_problem = n*small_prblem;
    return big_problem;
}
int main(){
    int n;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"This is the factorial of "<<n<<" is : "<<ans<<endl;
    
    return 0;
}                */


/*
//Q-2 :find 2 power n 
int power(int n ){
    //base case 
    if(n == 0){
        return 1;
    }

    // recurion relation 
    int small_problem = power(n-1);
    int big_problem = 2*small_problem;
    return big_problem;
}
int main(){
    int n;
    cout<<"Enter your number : "<<endl;
    cin>>n;
int ans = power(n);
cout<<"This is the value of 2 power "<<n<<" is : "<<ans<<endl;

}    */


// print counting n to 1 and 1 to n
void print1(int n ){  // for n to 1
     // base case 
     if(n==0){
        return ;
     }

     // processing 
     cout<<n<<" ";

     // recursive relation 
     print1(n-1);
}

void print2(int n ){  // for 1 to n
     // base case 
     if(n==0){
        return ;
     }

    // recursive relation 
     print2(n-1);

     // processing 
     cout<<n<<" ";

    
}
int main(){
    int n;
    cout<<"Enter your number "<<endl;
    cin>>n;
    print1(n);
    cout<<endl;
    print2(n);
}