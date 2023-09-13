//Q(1)

 #include<iostream>
using namespace std;
int main(){
    int a , b;
    cin>>a>>b;
    for(int i = a ; i<=b ; i++){
       if(i>=1 && i<=9){
           if(i==1){
                    cout<<"one"<<endl;
                }
                if(i==2){
                    cout<<"two"<<endl;
                }
                if(i==3){
                     cout<<"three"<<endl;
                }
                if(i==4){
                     cout<<"four"<<endl;
                }
                if(i==5){
                     cout<<"five"<<endl;
                }
                if(i==6){
                     cout<<"six"<<endl;
                }
                if(i==7){
                     cout<<"seven"<<endl;
                }
                if(i==8){
                     cout<<"eight"<<endl;
                }
                if(i==9){
                     cout<<"nine"<<endl;
                }
       }
       else{
           if(i%2==0){
               cout<<"even"<<endl;
           }
           else{
               cout<<"odd"<<endl;
           }
       }
    }
}


//Q(2)
//////////////////////////
#include <iostream>
#include <cstdio>
#include<climits>
using namespace std;

int getmax(int num[] , int n){
    int max = INT_MIN;
    for(int i = 0 ; i<n ; i++){
        if(num[i]>max){
           max = num[i] ;
        }
       
    }
    return max; 
}


int main() {
    int n =4;
    int num[4];
    for(int i = 0 ; i<4 ; i++){
        cin>>num[i];
    }
    cout<<getmax(num , n);
}


//Q(3)
////////////////////////
#include <iostream>
using namespace std;


int main() {
    int a , b ;
    cin>>a>>b;
    int sum = a + b;
    int dif = a - b;
    cout<<sum<<endl;
    if(dif>=0){
        cout<<dif<<endl;
    }
    else{
        cout<<(-(dif))<<endl;
    }
    
    
}


////////////////////////////////
int main(){
    int size ;
    cin>>size;
    int num[1000];
    for(int i = 0 ; i<size ; i++){
        cin>>num[i];
    }

    for(int i = (size - 1) ; i >= 0 ; i--){
        cout<< num[i] <<" ";
    }
 }