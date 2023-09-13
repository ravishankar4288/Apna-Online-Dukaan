#include<iostream>
using namespace std;
/*
// Q-4 : Reached Home 
void reachHome(int source , int dest ){
    // this is extra--> How seen your step
    cout<<"source "<<source<<" dest "<<dest<<endl;

    // base case
    if(source == dest ){
        cout<<"you reached your Home "<<endl;
        return ;
   }

   // processing 
    source++;

    // recursive relation 
    reachHome(source , dest);
}
int main(){
    int source , dest;
    cout<<"write your source and dest "<<endl;
    cin>>source>>dest;
    reachHome(source , dest);
}                                                  */


/*
// Q-5: find nth Fibonnacci number
int fibonnacci(int n){
    // badse case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    // recurion relation
    return (fibonnacci(n-1) + fibonnacci(n-2));
     
}
int main(){
    int n;
    cout<<"Select nth term of Fibonnacci number : "<<endl;
    cin>>n;
    int ans = fibonnacci(n);
    cout<<"This is the "<<n<<"th term of fibonnacci number : "<<ans<<endl;

}     */


/*
// Q-6: find number way to reached nth stairs 
int goal(int n ){
    // base case 
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    // recursion relation 
    int ans = goal(n-1) + goal(n-2);
    return ans;
}
int main(){
int n;
cout<<"enter number of stairs :"<<endl;
cin>>n;
int ans  = goal(n);
cout<<"this is the number of way to reached "<<n<<"th stairs : "<<ans;
}
     */


// Q-7: say digit 
void sayDigit(string arr[] , int n){
    //base case
    if(n==0){
        return ;
    }
    // processig
    int digit = n%10;
    n = n/10;
    // recursion relation 
    sayDigit(arr,n);
    cout<<arr[digit]<<" ";
}
int main(){
int n;
cout<<"enter your number "<<endl;
cin>>n;
string arr[10] ={"zero" , "one" , "two" , "three" , "four" , "five", "six" , "seven" , "eight " , "nine" };
sayDigit(arr , n);

}
