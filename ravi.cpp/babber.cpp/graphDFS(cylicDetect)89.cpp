#include <bits/stdc++.h>
#include<unordered_map>
#include<queue>
#include<list>

//*****************************************************
//Q-1 :Detect Cycle In A Directed Graph (by DFS)

bool checkCylcicDectection(int node, unordered_map<int,bool> &visited,
    unordered_map<int, bool> &dfsVisited, unordered_map<int,list<int>> &adj){
      visited[node] = true;
      dfsVisited[node] = true;

      for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
          bool cyclicDetect = checkCylcicDectection(neighbour, visited, dfsVisited,adj);
          if(cyclicDetect)
            return true;
        }
        else if(dfsVisited[neighbour]){
          return true;
          }
      }
      dfsVisited[node] = false;
      return false;
    }


int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // create adj list
  unordered_map<int,list<int>> adj;
  for(int i=0; i<edges.size(); i++){
    int u = edges[i].first;
    int v = edges[i].second;

    adj[u].push_back(v);
  }

  //call dfs for all node of graph
  unordered_map<int,bool> visited;
  unordered_map<int, bool> dfsVisited;
  for(int i=1; i<= n; i++){
    if(!visited[i]){
      bool cyclicDetect = checkCylcicDectection(i, visited, dfsVisited, adj);
      if(cyclicDetect){
        return true;
      }
    }
  }
  return false;
}