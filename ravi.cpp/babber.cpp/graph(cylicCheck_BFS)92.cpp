#include<unordered_map>
#include<list>
#include<queue>
//*****************************************************
//Q-1 : Detect Cycle In A Directed Graph using bfs (kahn's algo)

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  //create adj
    unordered_map<int,list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first -1;
        int v = edges[i].second -1;

        adj[u].push_back(v);
    }

    //find indegree of all node
    vector<int> indegree(n);
    for(auto i: adj){

        for(auto j: i.second ){
            indegree[j]++;
        }
    }

    //0 indegree walo ko push kar in queue
    queue<int> q;
    for(int i=0; i<n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    //do bfs
    int count = 0;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        //count increase
        count++;
        
        //neighbour indegree update 
        for(auto neighbour: adj[frontNode]){
            indegree[neighbour]--;
            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    
    if(count == n)
      return false;
    else
      return true;
      
}