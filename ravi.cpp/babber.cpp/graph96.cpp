#include <bits/stdc++.h> 
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    //create adj
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0; i<g.size(); i++){
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //initialisation some impotant term
    vector<int> key(n+1);
    vector<bool> mst(n+1);
    vector<int> parent(n+1);

    for(int i=0; i<=n; i++){
        key[i]=INT_MAX;
        mst[i]= false;
        parent[i] = -1;
    }

    //let's start code 
    key[1] = 0;
    parent[1] = -1;

    for(int i=1; i<=n; i++){
        int mini = INT_MAX;
        int u;

        //find min key wala vertex
        for(int v=1; v<=n; v++){
            if(mst[v] == false && key[v]<mini){
                u=v;
                mini = key[v];   
            }
        }

        //mark true of min wala node
        mst[u] = true;

        //check its adjacent node
        for(auto it : adj[u]){
            int v = it.first;
            int w = it.second;

            if(mst[v] == false && w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    vector<pair<pair<int, int>, int>> res;
    for(int i=2; i<=n; i++){
        res.push_back({{parent[i],i}, key[i]});
    }
    return res;
}
