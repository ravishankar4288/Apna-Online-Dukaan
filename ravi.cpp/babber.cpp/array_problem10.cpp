#include<iostream>
using namespace std;

//  //************* (1) swap alternate array   *******************

// void printarray(int num[] , int n){
//     for(int i = 0 ; i<n ; i++){
//         cout<<num[i]<<" ";
//     }
// }

// void swapalternate(int num[] , int n){
//     for(int i = 0 ; i<n ; i += 2){
//        if(i+1 < n){
//         swap(num[i] , num[i+1]);
//        }
//     }
// }

// int main(){ 
// int even[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 0};
// int odd [11] = {1 , 3 , 5 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 21};

// swapalternate(even , 10);
// printarray(even , 10);

// cout<<endl;
// swapalternate(odd , 11);
// printarray(odd , 11);

// }


// // ********************** (2) find unique value in array;  **********************
// void unique(int num[] , int n){
//     int ans1 = 0 ;
//     int ans2 = 0 ;
//     int final_ans;
//     for(int i = 0 ; i<n ; i = i + 2 ){   
//        ans1 = ans1 + i;
//        ans2 = ans2 + (i+1) ;
//        final_ans = ans1 - ans2;
//     }
//     if(final_ans >= 0){
//         cout<<final_ans<<endl;
//     }                                                   // this method in pending now 
//     else{
//         cout<<(-(final_ans))<<endl;
//     }
// }

// int main(){
//     int size ;
//     cout<<"select your odd array list :"<<endl;
//     cin>>size;
//     int num[999];
//     cout<<"please enter your odd element :"<<endl;
//     for(int i = 0 ; i<size ; i++){
//         cin>>num[i];
//     }

//     unique(num , size);
// }
       

    //    int main(){
    //   int size ;
    //   int ans = 0;
    //  cout<<"select your odd array list :"<<endl;
    //  cin>>size;
    //  int num[999];
    //  cout<<"please enter your odd element :"<<endl;
    //  for(int i = 0 ; i<size ; i++){
    //      cin>>num[i];
    //      ans = ans ^ num[i];
    //    }      
    //    cout<<ans<<endl;
    //    }


//**************************** (3) find dublicate value ***********************************
  // int main(){
  //     int size ;
  //     int ans = 0;
  //    cout<<"select your array list :"<<endl;
  //    cin>>size;
  //    int num[999];
  //    cout<<"please enter your  element :"<<endl;
  //    for(int i = 0 ; i<size ; i++){
  //        cin>>num[i];
  //        ans = ans ^ num[i];
  //      }    

  //      for(int i = 0 ; i<size ; i++) {
  //       ans = ans ^ i;
  //      } 
  //      cout<<ans <<endl;
    
  //      }


//***************** (4) find intersection of given two array *********************************

int main(){
  int arr1 , arr2 , n , m ;
  cin>>n>>m;
  int i = 0, j = 0;
  //vector<int>ans;


}