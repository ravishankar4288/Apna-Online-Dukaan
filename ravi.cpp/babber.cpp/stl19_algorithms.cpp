#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    vector<int> a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);
    a.push_back(8);
    a.push_back(10);

for(int i : a){
cout<<i<<" ";
}cout<<endl;

    cout<<"finding 6 by using binary search : "<<binary_search(a.begin() , a.end() , 6) <<endl;
    cout<<"finding -6 by using binary search : "<<binary_search(a.begin() , a.end() , -6) <<endl;
    cout<<"upper bound of 6 -> "<<upper_bound(a.begin() , a.end() , 6) - a.begin()<<endl;
    cout<<"lower bound of 6 -> "<<lower_bound(a.begin() , a.end() , 6) - a.begin()<<endl;

cout<<endl;

int x = 10;
int y = 20;

cout<<"max value is -> "<<max(x,y)<<endl;  // Here max and min value find only two number
cout<<"min value is -> "<<min(x,y)<<endl;

swap(x,y);
cout<<"value of x is -> "<<x<<endl;

string s = "abcde";
reverse(s.begin() , s.end());   // This is possible for only for string
cout<<"reverse of s is -> : "<<s<<endl;


rotate(a.begin() , a.begin() + 2 , a.end());
cout<<"rotate the numbers of vector : "<<endl;
for(int i : a){
cout<<i<<" ";
}cout<<endl;

cout<<endl;

// sort(a.begin() , a.end());  // --> this is in pending 
// cout<<"this is the sorting of vector 'a' : "<<endl;
// for(int i : a){
//     cout<<i<<" ";
// }cout<<endl;

}