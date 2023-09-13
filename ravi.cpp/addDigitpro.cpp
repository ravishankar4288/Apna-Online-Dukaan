#include<iostream>
using namespace std;


    int main() {
  int n;
cin>>n;
    int ans = 0;
    int ans2 = 0;
    while(n!=0){
      int digit = n%10;
      ans = ans + digit;   
        n = n/10; 
    }
    
    if(ans<10){
        cout<<ans;
    }
    
    else{
        while(ans!=0){
            int digit = ans%10;
      ans2 = ans2 + digit;   
        ans = ans/10;  
        }
    }
    if(ans2 == 10){
        cout<<1;
    }
    else{
        cout<<ans2;
    }
    
    /*
//Q-3 :find m power n 
int powre_of_m(int m  ,int n){
    int n;
    //base case
    if(n==0){
        return 1;
    }

    // recursion relation 
    int small_problem = powre_of_m(n-(1));
    int big_problem  = m*small_problem;
    return big_problem;
}
int main(){
int m , n;
cout<<"Enter value of m and n where m^n :"<<endl;
cin>>m>>n;
int ans = powre_of_m(m ,n);
cout<<ans;


}
 */
}
   