#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class graph{
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        //direction ==0 -> then this is undirected graph
        //direction ==1 -> then this is directed graph
        adj[u].push_back(v);

        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void printAdjNode(){
        for(auto i : adj){
            cout<<i.first<<"-> ";
            for(auto j: i.second){
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main(){
    graph g;
    int n;
    cout<<"Enter the number of Nodes "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edge "<<endl;
    cin>>m;

    cout<<"select direction of edge "<<endl;
    for(int i=0; i<m ; i++){
        int u, v;
        cin>>u>>v;
        //creating undirected graph
        g.addEdge(u,v,0);
    }
    
    g.printAdjNode();
}