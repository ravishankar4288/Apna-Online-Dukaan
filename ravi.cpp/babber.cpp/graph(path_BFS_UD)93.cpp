#include<unordered_map>
#include<list>
#include<queue>

//*****************************************************
//Q-1 :Shortest path in an unweighted graph by BFS

vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){
	
	//create adj list
	unordered_map<int, list<int>> adj;
	for(int i=0; i<edges.size(); i++){
		int u = edges[i].first;
		int v = edges[i].second;

		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	//do BFS
	unordered_map<int,bool> visited;
	unordered_map<int,int> parent;
	queue<int> q;

	parent[s] = -1;
	visited[s] = true;
	q.push(s);

	while(!q.empty()){
		int frontNode = q.front();
		q.pop();

		for(auto neighbour : adj[frontNode]){
			if(!visited[neighbour]){
				visited[neighbour] = true;
				parent[neighbour] = frontNode;
				q.push(neighbour);
			}
		}
	}

	//prepair shortest path 
	vector<int> ans;
	int currNode = t;
	ans.push_back(t);

	while(currNode != s){
		currNode = parent[currNode];
		ans.push_back(currNode);
	}

	reverse(ans.begin(), ans.end());
	return ans;	
}
