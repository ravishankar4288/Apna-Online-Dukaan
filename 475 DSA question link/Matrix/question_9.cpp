//*****************************************************
//Q-1 : Common Elements Present In All Rows Of Matrix

#include<bits/stdc++.h>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    // Write your code here
    vector<int> ans;
    int n = mat.size();
    int m = mat[0].size();
    unordered_map<int, int> mapp;

    for(int j=0; j<m; j++){
        mapp[mat[0][j]] = 1;
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<m; j++){
            if(mapp[mat[i][j]]==i){
                mapp[mat[i][j]] = i+1;
            }
        }
    }

    for(auto itr= mapp.begin(); itr != mapp.end(); itr++){
        if(itr->second == n){
            ans.push_back(itr->first);
        }
    }
    return ans;

}
