#include <bits/stdc++.h> 
//*****************************************************
//Q-1 :Dijkstra's shortest path

vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    //create adj list
    unordered_map<int, list<pair<int,int>>> adj;
    for(int i=0; i<edges; i++){
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    //creation of array distance initially these are infinte
    vector<int> dist(vertices);
    for(int i=0; i<vertices; i++){
        dist[i] = INT_MAX;
    }

    //creation a set with basis of (distance, node)
    set<pair<int,int>> st;

    //set dist of source node and insert in to the set
    dist[source] = 0;
    st.insert(make_pair(0,source));

    // traverse all node of graph
    while(!st.empty()){

        //find record of top element of set
        auto top = *(st.begin());

        int nodeDist = top.first;
        int topNode = top.second;

        //remove top element 
        st.erase(st.begin());

        //traverse neighbour of top node 
        for(auto neighbour: adj[topNode]){
            if((nodeDist + neighbour.second)< dist[neighbour.first]){
                auto record = st.find(make_pair(dist[neighbour.first], neighbour.first));

                //if record is founded then earse it
                if(record != st.end()){
                    st.erase(record);
                }

                // distance update 
                dist[neighbour.first] = nodeDist + neighbour.second;

                //record push in set
                st.insert(make_pair(dist[neighbour.first], neighbour.first));
            }
           
        }
    }

    return dist;
}
