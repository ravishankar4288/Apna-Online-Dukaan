#include <bits/stdc++.h>
//*****************************************************
//Q-1 : DFS Traversal
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjList,
    vector<int> &comp ){
        comp.push_back(node);
        visited[node] = 1;

        //recursive call for all node
        for(auto i: adjList[node]){
            if(!visited[i]){
                dfs(i,visited, adjList, comp);
            }
        }
    }

vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    //prepare adjList
    unordered_map<int, list<int>> adjList;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    vector<int> ans;
    unordered_map<int, bool> visited;

    //call all node of graph , if not visited
    for(int i=0 ; i<V; i++){
        if(!visited[i]){
            vector<int> comp;
            dfs(i, visited, adjList, comp);
            ans.push_back(comp);
            
        }
    }
    return ans;
}