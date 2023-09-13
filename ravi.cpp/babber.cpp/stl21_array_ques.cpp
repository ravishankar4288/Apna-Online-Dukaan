#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

// question(4) -> find rotate k-value of given number
//Method -(1)
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);
    
//     rotate(v.begin() ,  v.begin() + 3 , v.end());
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
// }


// //Method-(2)
// void rotate_value(vector <int>& v ,int k ){
    
//     vector <int> temp(v.size());
//     for(int i = 0 ; i<v.size() ; i++){
//         temp[(i+k) % v.size()] = v[i];
//     }
//     v = temp;
// }

// void print(vector <int> v){
//     for(int i = 0 ; i<v.size() ; i++){
//         cout<<v[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     vector <int> v ;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     v.push_back(6);
//     v.push_back(7);

//     rotate_value(v ,3);
//     cout<<"this is rotated 2-value : "<<endl;
//     print(v);
// }


// question(5) -> check rotsted and sorted numbers
bool check(vector <int>& v){
    int count  =  0 ;
    int n = v.size();
    for( int i = 1 ; i< n ; i++){
        if(v[i-1] > v[i]){
            count ++;
        }
    }
        if (v[n-1] > v[0])
            count++;
        return count <= 1;    

};

 int main(){
    vector <int> v ;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
//  cout<<" is this rotated and sorted value ? : "<<endl;
    check(v);
   
   
}