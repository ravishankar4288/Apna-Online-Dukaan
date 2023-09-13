#include <bits/stdc++.h>
//*****************************************************
//Q-1 : Topological Sort By bfs method

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {

    //create adj
    unordered_map<int,list<int>> adj;
    for(int i=0; i<e; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    //find indegree of all node
    vector<int> indegree(v);
    for(auto i: adj){

        for(auto j: i.second ){
            indegree[j]++;
        }
    }

    //0 indegree walo ko push kar in queue
    queue<int> q;
    for(int i=0; i<v; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    //do bfs
    vector<int> ans;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        //store frontNode in ans
        ans.push_back(frontNode);

        //neighbour indegree update 
        for(auto neighbour: adj[frontNode]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    return ans;
}