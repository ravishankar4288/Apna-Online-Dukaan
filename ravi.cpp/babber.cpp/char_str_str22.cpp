#include<iostream>
using namespace std;
// int main(){
//     // charater -> char
// char name[50]  ;
// cout<<"write your name : "<<endl;
// cin>>name;  
// name[4]='\0'; // It means after index 3 any name of charater not included in output
//               // because at index 4 , null charater is present.
// cout<<"your name is "<<name<<endl;
// }


// //question->(1) find length of string
// int getlength(char name[]){
//     int count = 0 ;
//     for(int i = 0 ; name[i] != '\0' ; i++){
//         count = count + 1;
//         //count++;
//     }
//     return count ;
// }

// int main(){
//    char name[50]  ;
// cout<<"write your name : "<<endl;
// cin>>name;  
// cout<<"size of name is "<<getlength(name)<<endl;
// } 


// question->(2) find reverse of string 
void reverse_string(char str [] , int n){
    int s = 0;
    int e = n-1;
    while(s>e){
        swap(str[s] , str[e]);
        s++;
        e--;
    }
}
int main(){
    
}
 