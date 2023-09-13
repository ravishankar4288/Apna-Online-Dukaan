#include<iostream>
using namespace std;

/*
void update1(int n){
    n++;
}

void update2(int &n){
    n++;
}

int main(){
    // Create a Reference variable 
    int i = 10;
    int &j = i;
    i++;
    cout<<"value of i : "<<i<<endl;
    cout<<"value of j : "<<j<<endl;

    cout<<endl;
    j++;
    cout<<"value of i : "<<i<<endl;
    cout<<"value of j : "<<j<<endl;

    cout<<endl;
    int n1 = 10;
    cout<<"before : "<<n1<<endl;
    update1(n1);
    cout<<"after : "<<n1<<endl;  // Here value is not change because this is not reference variable


    cout<<endl;
    int n2 = 20;
    cout<<"before : "<<n2<<endl;
    update2(n2);
    cout<<"after : "<<n2<<endl;  // Here value is change because this is reference variable

}

     */

// Take n input in Array with good practice 
int getSum(int arr[] , int n){
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i] ;
    }
    return sum;
}
int main(){
// char ch = 'a';
// cout<<"size of ch is : "  <<sizeof(ch)<<endl;
// char *ptr = &ch;
// cout<<"size of poiter ptr is : "<<sizeof(ptr)<<endl;

cout<<endl;
int n;
cout<<"Enter size of array : "<<endl;
cin>>n;
int *arr = new int[n];
cout<<"enter element of array : "<<endl;
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
}
int ans = getSum(arr , n );
cout<<"this is the sum of all element of array : "<<ans<<endl;
}