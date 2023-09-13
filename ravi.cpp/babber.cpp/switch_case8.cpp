#include<iostream>
using namespace std;
int main(){
    // int num = 2;
    // switch(num){
    //     case 1: cout<<"this is first number "<<endl;
    //     break;

    //     case 2: cout<<"this is 2nd number "<<endl;
    //     break;

    //     case 3: cout<<"this is 3rd number "<<endl;
    //     break;

    //     default : cout<<"this is not possible "<<endl;
    // }


    //  int num = 3;
    //  char ch = '2';
    // switch(ch){
    //     case 1: cout<<"this is first number "<<endl;
    //     break;

    //     case '2': switch(num){
    //         case 1: cout<<"value of 1st number "<<endl;
    //         break;

    //         case 2: cout<<"value of 2nd number "<<endl;
    //         break;
            
    //         case 3: cout<<"value of 3rd number "<<endl;
    //         break;
    //     }
    //     break;

    //     case 3: cout<<"this is 3rd number "<<endl;
    //     break;

    //     default : cout<<"this is not possible "<<endl;
    // }

    // int n =2 ;
    // int i = 1;
    // while(i>=1 ){
    // switch(n){
    //     case 1: cout<<"first "<<endl;
    //     break;

    //     case 2: cout<<"second "<<endl;
    //     break;

    //     default : cout<<"this is not possible "<<endl;
    //     break;
     
    // }
    //    exit(i>=1);
    // }

    // NOTE :- In the switch case do not use continue function

// // Make a calculator that work on + , - , * , / when two number is given 
// int a;
// cout<<"enter your 1st number "<<endl;
// cin>>a;
// int b;
// cout<<"enter your 2nd number "<<endl;
// cin>>b;
// char ch;
// cout<<"select your opperator "<<endl;
// cin>>ch;
// switch(ch){
//     case '+': cout<<"sum of a and b :"<<(a+b)<<endl;
//     break;
    
//     case '-': cout<<"b substrat from b :"<<(a-b)<<endl;
//     break;

//     case '*': cout<<"muitiple of a and b :"<<(a*b)<<endl;
//     break;

//     case '/': cout<<"a divided by b :"<<(a/b)<<endl;
//     break;
     
//      default : cout<<"this is not possible :"<<endl;
// }


// Make a program that ouput gives how many notes of 100 , 50 , 20 , 1.
int money ;
cout<<"enter your amount  :"<<endl;
cin>>money;
// int note ;
// cout<<"select your note :"<<endl;
// cin>>note;
int n1 , n2 , n3 , n4 ;
 n1 =  money / 100 ;                                // this question is pending by switch
 n2 = (money-(n1*100))/50 ;
 n3 = (money - (n1*100 + n2*50))/20;
 n4 = (money - (n1*100 + n2*50 + n3*20))/1;

 cout<<"this is note of 100  :"<<n1<<endl;
  cout<<"this is nite of 50 :"<<n2<<endl;
   cout<<"this is note of 20 :"<<n3<<endl;
    cout<<"this is note of 1 :"<<n4<<endl;


// switch(money){
//     case 100 : cout<<"this is note of 100  :"<< n1 <<endl;

//     case 50 : cout<<"this is nite of 50 :"<< n2 <<endl;
    
//     case 20 : cout<<"this is note of 20 :"<< n3 <<endl;

//     case 1 : cout<<"this is note of 1 :"<< n4 <<endl;
//     break;

// }

}