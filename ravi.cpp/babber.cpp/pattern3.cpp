#include<iostream>
using namespace std;

int main(){     

/*
     int n;                              //* * *
     cout<<"enter your number:"<<endl;   //* * *
    cin>>n;                              //* * *
    int i=1;
    while(i<=n){
      int  j=1;
      while(j<=n){
        cout<<"*";
        j = j+1;
      }
       cout<<endl;
       i = i+1; 
    }               */

/*
    int n;                                   // 1 1 1
    cout<<"enter your number :"<<endl;       // 2 2 2
    cin>>n;                                  // 3 3 3
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<" " <<i<<" ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }                 */

/*
    int n ;                                  // 1 2 3 
    cout<<"enter your number :"<<endl;       // 1 2 3
    cin>>n;                                  // 1 2 3 
    int i = 1;
    while(i<=n){
       int j = 1;
       while(j<=n){
        cout<<j<<" ";
        j = j + 1;
       }
       cout<<endl;
       i = i + 1;
    }                  */


/*
      int n;                                // 3 2 1
      cout <<"enter your number :"<<endl;   // 3 2 1
      cin>>n;                               // 3 2 1
      int i = 1;
      while(i<=n){
        int j = n;
        while(j>=1 ){
            cout<<j<<" ";
            j = j - 1;
        }
        cout<<endl;
        i = i + 1;
      }              */


/*
int n;                                  // 1 2 3 
cout<<"enter your number :"<<endl;      // 4 5 6
cin>>n;                                 // 7 8 9
int i = 1;
int count = 1;
while(i<=n){
    int j=1;
    while(j<=n){
        cout<<count<<"  ";
        count = count + 1; 
        j = j + 1;
    }
    cout<<endl;
i = i + 1;
}           */

 /*                                 
int n ;
cout<<"enter the your number :"<<endl;       // * 
cin>>n;                                      // * * 
int i = 1;                                   // * * *
while(i<=n){
    int j =1;
    while(j<=i){
        cout<<" * ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}               */


/*
int n;                                      // 1
cout<<"enter your number :"<<endl;          // 2 2
cin>>n;                                     // 3 3 3
int i = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<i<<"  ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}                */


/*
int n ;                                    // 1
cout<<"enter your number : "<<endl;        // 2 3 
cin>>n;                                    // 4 5 6 
int i = 1;
int count = 1;
while(i<=n){
    int j = 1;
    while(j<=i){
        cout<<count<< "  ";
        count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}                 */

/*
int n ;                               // 1
cout <<"enter your number :"<<endl;   // 2 3  
cin>>n;                               // 3 4 5   
int i = 1;
while(i<=n){
    int j = 1;
    int count = i;
    while(j<=i){
        cout<<count<< "  ";
        count = count + 1;
         j = j + 1;
    }
    cout <<endl;
    i = i + 1 ;
}                */


/*
int n ;                               // 1
cout <<"enter your number :"<<endl;   // 2 1
cin>>n;                               // 3 2 1
int i =1;
while(i<=n){
    int j = 1;
    int count = i;
    while(j<=i){
        cout<<count<< "  ";
        count = count - 1;
        j = j+1;
    }
    cout<<endl;
    i = i + 1;
}                   */


/*
int n;
cout <<"enter your number : "<<endl;  // A A A  
cin>>n;                               // B B B
int i = 1;                            // C C C
char count = 'A';
while (i<=n){
    int  j = 1;   
    while(j<=n){
        char ch = 'A' + i - 1;
        cout<<ch<<"  ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}              */


/*
int n ;                                 // A B C 
cout <<"enter your number :"<<endl;     // A B C 
cin>>n;                                 // A B C 
int i =1;
while (i<=n){
    int j = 1;
    while(j<=n){
        char ch = 'A' + j - 1;
        cout<<ch<<"  ";
        j = j + 1;
    }
    cout <<endl;
    i = i + 1;
}                */


/*
int n ;                             // A B C
cout<<"enter your number :"<<endl;  // D E F
cin>>n;                             // I J K
int i =1;
char count = 'A';
while(i<=n){
    int j = 1;
    while (j<=n){
        cout<<count<<"  ";
        count = count + 1;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}                 */

/*
int n ;                              // A B C
cout<<"enter your number :"<<endl;   // B C D
cin>>n;                              // C D E
int i = 1;
while (i<=n){
    int j = 1;
    while(j<=n){
        char ch = i + j + 'A' - 2;
        cout<<ch<<"  ";
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
}               */


// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int j = 1 ;
//     while(j<=i){
//         char ch = 'A' + i - 1;
//         cout<<ch<<"  ";
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }



// int n;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i = 1;
// char count = 'A';
// while(i<=n){
//     int j =1;
//     while(j<=i){
//         cout<<count<<"  ";
//         count = count + 1;
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }



// int n;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i = 1 ;
// while(i<=n){
//     int j = 1 ;
//     while(j<=i){
//         char ch = 'A' + i + j -2;
//         cout<<ch<<"  ";
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int n ;
// cout <<"enter your number :"<<endl;
// cin>>n ;
// int i = 1;
// while(i<=n){
//     int j = 1;
//     char ch = 'A' + n - i;
//     while(j<=i){       
//         cout<<ch<<"  ";
//         ch = ch + 1;
//         j = j + 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int n;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i = 1;
// while (i<=n){
//     int space = n - i ;
//     while(space){
//         cout<<" ";
//         space = space - 1;
//     }    
//     int j = 1;
//     while(j<=i){
//         cout<<"*";
//         j = j + 1;
//      }
//     cout<<endl;
//     i = i + 1;
//     }


// int n ;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i =1;
// while(i<=n){
//     int j = n;
//     while(j>=i){
//         cout<<" * ";
//         j = j - 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }

// int n;
// cout<<"enter your number :"<<endl;        *****
// cin>>n;                                    **** 
// int i = 1;                                  ***
// while(i<=n){                                 **
//     int space = i-1;                          *
//     while(space){                       ---------- pending ---------
//         cout<<" ";
//         space = space + 1;                 1111
//     }                                       222
//     int j = n;                               33     pending
//     while(j>=i){                              4
//         cout<<"*";
//         j = j - 1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


// int n;
// cout<<"enter your number :"<<endl;
// cin>>n;
// int i = 1;
// while(i<=n){
//     int space = n - i;
//     while(space){
//         cout<<" ";
//         space = space - 1;
//     }
//     int j = 1;
//     while(j>=n){
//         cout<<i <<" ";
//         j = j + 1 ; 
//     }
//     cout<<endl;
//     i = i + 1;
// }
}   
    
