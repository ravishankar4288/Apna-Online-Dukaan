#include<bits/stdc++.h>
//Q-1 :  find out Duplicate Characters
vector<pair<char,int>> duplicate_char(string s, int n){

    map<char, int> m;
    for(int i=0; i<n; i++){
        char key = s[i];
        m[key]++;
    }

    vector<pair<char,int>> ans;
    
    for(auto itr = m.begin() ; itr != m.end() ; itr++){
    char a = itr->first;
    int b = itr->second;
    if(b != 1)
        ans.push_back(make_pair(a,b));
    else
        continue;
        
   }
    return ans;

   
}