#include <bits/stdc++.h>
//*****************************************************
//Q-1 : Topological Sort By dfs method

void topSort(int node, vector<bool> &visited, stack<int> &s,
    unordered_map<int,list<int>> &adj){
        visited[node] =1;
        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                topSort(neighbour, visited, s, adj);
            }
        }
        // returning time push in to stack 
        s.push(node);
    }

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    unordered_map<int,list<int>> adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //dfs call for every node of graph for T.S
    //unordered_map<int,bool> visited;
    vector<bool> visited(v);
    stack<int> s;
    for(int i=0; i<v; i++){
        if(!visited[i]){
            topSort(i, visited, s, adj);
        }
    }
    vector<int> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    return ans;
}