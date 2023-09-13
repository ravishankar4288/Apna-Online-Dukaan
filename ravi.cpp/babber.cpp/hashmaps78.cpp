#include <bits/stdc++.h>
#include<map>
#include<unordered_map>
using namespace std;
//***********************************************************************
//Q-1 :Maximum Frequency Number
int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int,int> count;
    int maxfre = 0;
    int maxAns = 0;
    for(int i=0; i<arr.size() ; i++){
        count[arr[i]]++;
        maxfre = max(maxfre, count[arr[i]]);
    }

    for(int i=0; i<arr.size(); i++){
        if(maxfre == count[arr[i]]){
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}



int main(){
//creation of map
map<string,int> m;

//insertion 
//1
pair<string,int> p = make_pair("ravi", 420);
m.insert(p);

//2
pair<string,int> pair2("shankar", 425);
m.insert(pair2);

//3
m["kumar"] = 440;
m["kumar"] = 450;


//searching 
cout<<m["ravi"]<<endl;
cout<<m.at("shankar")<<endl;

//cout<<m.at("unknown")<<endl;  here this give error "out of range"

cout<<m["unknown"]<<endl;    // this is zero value
cout<<m.at("unknown")<<endl; // here this give also zero value

cout<<m.size()<<endl;
m.erase("ravi");
cout<<m["kumar"]<<endl;
cout<<m.size()<<endl;

// //iterator print for unordered_map
// unordered_map<string,int> :: iterator it = m.begin();
// while(it != m.end()){
//     cout<<it->first <<" "<<it->second<<endl;
//     it++;
// }

// //simple print for unordered_map
// cout<<endl;
// for(auto i: m){
//   cout<<i.first <<" "<<i.second<<endl;
// }


//iterator print for map
map<string,int> :: iterator it = m.begin();
while(it != m.end()){
    cout<<it->first <<" "<<it->second<<endl;
    it++;
}

//simple print for map
cout<<endl;
for(auto i: m){
cout<<i.first <<" "<<i.second<<endl;
}
}