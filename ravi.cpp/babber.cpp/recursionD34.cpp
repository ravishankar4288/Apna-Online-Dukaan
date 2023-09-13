#include<iostream>
using namespace std;

/*
// Q-1 : Reverse string using recursion 
void getreverse(string& str , int i , int j ){
    // base case 
    if(i > j ){
        return ;
    }
    // processing 
    swap(str[i] , str[j]);
    i ++;
    j --;
    // recirsive relation 
    getreverse(str , i , j );
   
}
int main(){
    string str = "abcde";
    getreverse(str , 0 , str.length()-1 );
    cout<<"This is reverse string : "<<str<<" ";

}  */

/*
//Q-2 : Check palindrome 
bool checkPalindrome(string str , int i , int j){
    // base case 
    if(i>j){
        return true ;
    }

    // recursive relation 
    if(str[i]  != str[j]){
        return false;
    }
    else{
        return checkPalindrome(str , i+1 , j-1);
    }
}
int main(){
    string name = "abcde";
    bool ans = checkPalindrome(name , 0 , name.length()-1);
    if(ans){
        cout<<"Yes , this is palindrome "<<endl;
    }
    else{
        cout<<"Not palindrome "<<endl;
    }
}     */


/*
// Q-3 : find a^b 
int getpower(int a , int b){
    // base case
    if(b == 0 ){
        return 1 ;
    }
    if(b == 1){
        return a;
    }
    // recursive relation 
    int ans = getpower(a , b/2);
    if(b%2 == 0){
        return ans*ans ;
    }
    else {
        return a * ans * ans ;
    }
        
    }

int main(){
    int a , b ;
    cout<<"Enter value of a and b "<<endl;
    cin>>a>>b;
 int ans = getpower(a , b );
 cout<<"a^b is : "<<ans <<endl;
}    */


// Q-4 : Implement bubble sort
void bubbleSort(int arr[] , int size ){
    // base case 
    if(size == 0 || size == 1){
        return ;
    }
    // prosessing 
    for(int i = 0 ; i<size-1 ; i++ ){
       if(arr[i] > arr[i+1]){
        swap(arr[i] , arr[i+1]) ;
       }
    }
    // recursive relation 
    bubbleSort(arr , size-1);
}
int main(){
    int n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the element of array : "<<endl;
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }

    bubbleSort(arr , n);

    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}