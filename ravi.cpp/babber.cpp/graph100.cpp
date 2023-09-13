#include<unordered_map>
#include<list>
#include<stack>


//*****************************************************
//Q-1 :Count Strongly Connected Components (Kosaraju’s algo)

void dfs(int node, unordered_map<int, bool> &visited, 
    unordered_map<int, list<int>> &adj, stack<int> &s){

		visited[node] = true;

		for(auto neighbour: adj[node]){
			if(!visited[neighbour]){
				dfs(neighbour, visited, adj, s);
			}
		}
		s.push(node);
	}

	void reDdfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj){
		visited[node] = true;
		for(auto neighbour: adj[node]){
			if(!visited[neighbour]){
				reDdfs(neighbour, visited, adj);
			}
		}

	}

int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	//create adj
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++){
		int u = edges[i][0];
		int v = edges[i][1];

		adj[u].push_back(v);
	}

	//topo sort
	stack<int> s;
	unordered_map<int, bool> visited;
	for(int i=0; i<v; i++){
		if(!visited[i]){
			dfs(i, visited, adj, s);
		}
	}

	// create a transpose graph
	unordered_map<int, list<int>> transpose;
	for(int i=0; i<v; i++){
		visited[i] = 0;
		for(auto neighbour: adj[i]){
			transpose[neighbour].push_back(i);
		}
	}

	//dfs call a/c to topo order
	int count = 0;
	while(!s.empty()){
		int top = s.top();
		s.pop();
        if (!visited[top]) {
            count++;
            reDdfs(top, visited, transpose);
        }
    }
    return count;
}
