#include<iostream>
#include<vector> 
using namespace std;
/*  int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
        cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }  */


/*   int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    for(int i = 0 ; i<3 ; i++){
        for(int j = 0 ; j<4 ; j++){
        cout<<arr[i][j]<<" " ;
        }
        cout<<endl;
    }    */


/* int arr2[4][5];
cout<<"Enter your number "<<endl;    
for(int i = 0 ; i<4 ; i++){       // output is row wise 
    for(int j = 0 ; j<5 ; j++){
        cin>>arr2[i][j] ;
    }
 cout<<endl;
}   */


/* int arr2[4][5];
cout<<"Enter your number "<<endl;    
for(int i = 0 ; i<5 ; i++){       // output is col wise 
    for(int j = 0 ; j<4 ; j++){
        cin>>arr2[j][i] ;
    }
 cout<<endl;
}            */


/*
//print 2D array
for(int i = 0 ; i<4; i++){
        for(int j = 0 ; j<5 ; j++){
        cout<<arr2[i][j]<<" " ;
        }
        cout<<endl;
}  
}*/

/*
// Q-1 --> Linear search in 2D array 

bool ispresent(int arr3[][4] , int target , int i , int j){
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<4 ; j++){
            if (arr3[i][j] == target){
                return 1;
            }
            
        }
    }

   return 0;
}



int main(){
int arr3[3][4];
cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<4 ; j++){
        cin>>arr3[i][j];
    }
    cout<<endl;
}

for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<4 ; j++){
        cout<<arr3[i][j] <<" ";
    }
    cout<<endl;
}


cout<<"Enter your number for search : "<<endl;
int target;
cin>>target;


if (ispresent( arr3 , target , 3 , 4)){
    cout<<"this term is present "<<endl;
}
else{
    cout<<"this is not present "<<endl;
}

}     
         */


/*
// Q-2 --> row wise sum problem 
void printsum(int arr4[][3] , int i , int j ){
    cout<<"this is the sum of row :"<<endl;
    for(int i = 0 ; i<3 ; i++ ){
        int sum = 0 ;
        for(int j = 0 ; j<3 ; j++){
            sum = sum + arr4[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}        

int main(){
    int arr4 [3][3];
    cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cin>>arr4[i][j];
    }
    cout<<endl;
}

for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cout<<arr4[i][j] <<" ";
    }
    cout<<endl;
}

printsum(arr4 , 3, 3);
}
   */


/*
// Q-3 --> col wise sum problem 
void printsum(int arr4[][3] , int i , int j ){
    cout<<"this is the sum of row :"<<endl;
    for(int j = 0 ; j<3 ; j++ ){
        int sum = 0 ;
        for(int i = 0 ; i<3 ; i++){
            sum = sum + arr4[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}        

int main(){
    int arr4 [3][3];
    cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cin>>arr4[i][j];
    }
    cout<<endl;
}

for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cout<<arr4[i][j] <<" ";
    }
    cout<<endl;
}

printsum(arr4 , 3, 3);
}
    */


/*
// Q-4 ->> Largest row sum problem 
int largerowSum(int arr5[][3] , int i , int j) {
    int maxi = INT16_MIN;
    int maxrowindex = -1;
    for(int i = 0 ; i<3 ; i++ ){
        int sum = 0 ;
        for(int j = 0 ; j<3 ; j++){
            sum = sum + arr5[i][j];
        }
       if(sum > maxi){
        maxi = sum;
        maxrowindex = i;
       }
    }
    cout<<endl;
    cout<<"this is the max value of sum of row : "<<maxi<<endl;
    return maxrowindex;
}      

int main(){
    int arr5 [3][3];
    cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cin>>arr5[i][j];
    }
    cout<<endl;
} 
int ans = largerowSum(arr5 , 3 ,3 );
cout<<"max row sum index : "<<ans <<endl;
}
    */


/*
// Q-5 ->> Largest col sum problem 
int largecolSum(int arr5[][3] , int i , int j) {
    int maxi = INT16_MIN;
    int maxcolindex = -1;
    for(int j = 0 ; j<3 ; j++ ){
        int sum = 0 ;
        for(int i = 0 ; i<3 ; i++){
            sum = sum + arr5[i][j];
        }
       if(sum > maxi){
        maxi = sum;
        maxcolindex = j;
       }
    }
    cout<<endl;
    cout<<"this is the max value of col of row : "<<maxi<<endl;
    return maxcolindex;
}      

int main(){
    int arr5 [3][3];
    cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cin>>arr5[i][j];
    }
    cout<<endl;
} 
int ans = largecolSum(arr5 , 3 ,3 );
cout<<"max col sum index : "<<ans <<endl;
}
    */


/*
// Q-5 --> wave print 
vector<int> waveprint(vector<vector<int>> arr , int ni , int mj) {
  vector<int> ans;
  for(int j = 0 ; j<mj ; j++){
    for(j & 1){    // --> it means odd col 
      for(int i=ni-1 ; i>=0 ; i--){
        ans.push_back(arr[i][j]);
         } 
         }
    else{  //---> it means even col 
       for(int i = 0 ; i<ni ; i++){
        ans.push_back(arr[i][j]);
       }
    }
} 
return ans ;
}   */



// Q-6 ---> matrix rotated by 90 degree
#include <iostream>
#include<vector>
void  rotate(int arr[][3] , int i , int j ){
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
         swap(arr[i][j] , arr[j%3][2-j]);
         cout<<arr[j%3][2-j] <<" ";
       
    }
    cout<<endl;
}
}

int main() {
   int arr5[3][3];
    cout<<"Enter the 2D array element : "<<endl;
for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cin>>arr5[i][j];
    }
    cout<<endl;
} 

for(int i = 0 ; i<3 ; i++){
    for(int j = 0 ; j<3 ; j++){
        cout<<arr5[i][j] <<" ";
    }
    cout<<endl;
}

rotate(arr5 , 3 , 3);
    
}
