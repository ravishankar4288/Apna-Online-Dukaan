 #include<bits/stdc++.h>
// #include<iostream>
// #include<unordered_map>
// #include<list>
// #include<vector>
using namespace std;

int min(int a, int b){
    if(a<b)
        return a;
    return b;

}

void dfs(int node, int parent, vector<int> &disc,
    vector<int> &low, unordered_map<int, bool> &visited,
    unordered_map<int, list<int>> &adj, vector<int> &ap,
    int &timer){
        visited[node] = true;
        disc[node] = low[node] = timer++;
        int child = 0;
        for(auto neighbour: adj[node]){
            if(neighbour == parent){
                continue;
            }

            if(!visited[neighbour]){
                dfs(neighbour, node, disc, low, visited, adj, ap, timer);
                low[node] = min(low[node], low[neighbour]);

                //check ap or not
                if(low[neighbour] >= disc[node] && parent != -1){
                    ap[node] = 1;
                }
                child++;
            }
            else{
                low[node] = min(low[node], disc[neighbour]);
            }
        }
        if(parent == -1 && child > 1){
            ap[node] = 1;
        }
    }


int main(){
    int n = 5;
    int e = 5;
    vector< pair<int,int>> edges;
    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    // create adj list
    unordered_map<int, list<int>> adj;
    for(int i=0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer = 0;
    vector<int> disc(n);
    vector<int> low(n);
    unordered_map<int, bool> visited;
    vector<int> ap(n,0);
    int parent = -1;

    for(int i=0; i<n; i++){
        disc[i] = -1;
        low[i] = -1;
    }

    // call dfs
    for(int i=0; i<n; i++){
        if(!visited[i]){
            dfs(i, parent, disc, low, visited, adj, ap, timer);
        }
    }

    //print ap
    cout<<" A.P -> "<<endl;
    for(int i=0; i<n; i++){
        if(ap[i] != 0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

}