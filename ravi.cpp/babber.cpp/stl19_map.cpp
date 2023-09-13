#include<iostream>
#include<map>

using namespace std;
int main(){
map<int,string> m;
m[1] = "ravi";
m[5] = "shankar";
m[8] = "kumar";
m.insert({18,"sah"});
cout<<"before erase"<<endl;
for(auto i : m ){
    cout<<i.first<<" "<<i.second<<endl;
}
cout<<"8 is present or not : "<<m.count(8)<<endl;
cout<<"-9 is present or not : "<<m.count(-9)<<endl;

cout<<endl;

m.erase(5);
m.erase(1);
cout<<"after erase"<<endl;
for(auto i : m ){
    cout<<i.first<<" "<<i.second<<endl;
}

}