#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> m;
    m["mango"] = 5;
    m["apple"] = 10;
    m["orange"] = 22;
    m["banana"] = 19;
    m["lemon"] = 15;

//    for(auto fruit : m){
//     cout<<fruit.first<<" "<<fruit.second<<endl;
//    }

//    for(auto itr = m.begin() ; itr != m.end() ; itr++){
//     cout<<itr->first <<" "<<itr->second<<endl;
//    }

   string key = "apple";
   if(m.find(key) != m.end()){
    cout<<"element is present "<<endl;
   }
   else{
    cout<<"element is not present "<<endl;
   }

   if(m.find(key) != m.end()){
      auto temp = m.find(key);
      cout<<"name is "<<temp->first<<endl;
      cout<<"value is "<<temp->second<<endl;
   }

   m.insert(make_pair("grappes", 429));
   cout<<"map size -> "<<m.size()<<endl;

   key = "apple";
   m.erase(key);

   for(auto itr = m.begin() ; itr != m.end() ; itr++){
    cout<<itr->first <<" "<<itr->second<<endl;
   }

    cout<<"map size -> "<<m.size()<<endl;
    cout<<endl;
    cout<<endl;

    //*******************************************************
    int arr[] = {1, 2, 2, 4, 2, 7, 4, 4, 55, 5, 4, 4, 3 };
    unordered_map<int,int> mapp;
    for(int i=0; i<13; i++){
        int data = arr[i];
        mapp[data]++;
    }

    for(auto itr = mapp.begin() ; itr != mapp.end() ; itr++){
    cout<<itr->first <<" "<<itr->second<<endl;
   }


}