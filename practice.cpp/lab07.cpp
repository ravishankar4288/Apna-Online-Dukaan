
//****************************************************************************************
//Q-1 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// structure to represent a job with start and finish times
struct Job {
    int start;
    int finish;
};

// function to compare jobs based on finish times
bool compare_jobs(Job a, Job b) {
    return a.finish < b.finish;
}

// function to find the largest possible subset of non-overlapping jobs
vector<Job> find_maximum_non_overlapping_subset(vector<Job>& jobs) {
    // sort jobs by finish times in non-decreasing order
    sort(jobs.begin(), jobs.end(), compare_jobs);
	
    
    // initialize selected jobs vector with the first job
    vector<Job> selected_jobs = {jobs[0]};
    
    // iterate through remaining jobs and add non-overlapping ones to selected jobs vector
    for (int i = 1; i < jobs.size(); i++) {
        if (jobs[i].start >= selected_jobs.back().finish) {
            selected_jobs.push_back(jobs[i]);
        }
    }
    
    return selected_jobs;
}

// main function to test the above algorithm
int main() {
    vector<Job> jobs = {{{2, 10}, {4, 7}, {3,9} ,{8, 10}}};

    vector<Job> selected_jobs = find_maximum_non_overlapping_subset(jobs);
    
    cout << "The maximum non-overlapping job subset is:\n";
    for (Job job : selected_jobs) {
        cout << "[" << job.start << ", " << job.finish << "] ";
    }
    cout << endl;
    
    return 0;
}




// //***************************************************************************************************************
//
/*#include<iostream>
#include<climits>
using namespace std;

int findMinVertex(int* weights, bool* visited, int n){

	int minVertex = -1;
	for(int i = 0; i < n; i++){
		if(!visited[i] && (minVertex == - 1 || weights[i] < weights[minVertex])){
			minVertex = i;
		}
	}
	return minVertex;
}


void prims(int** edges, int n){

	int* parent = new int[n];
	int* weights = new int[n];
	bool* visited = new bool[n];

	for(int i = 0; i < n; i++){
		visited[i] = false;
		weights[i] = INT_MAX;
	}
	parent[0] = -1;
	weights[0] = 0;

	for(int i = 0; i < n - 1; i++){
		// Find Min Vertex
		int minVertex = findMinVertex(weights, visited, n);
		visited[minVertex] = true;
		// Explore un visted neighbours
		for(int j = 0; j < n; j++){
			if(edges[minVertex][j] != 0 && !visited[j]){
				if(edges[minVertex][j] < weights[j]){
					weights[j] = edges[minVertex][j];
					parent[j] = minVertex;
				}
			}
		}
	}

	for(int i = 1; i < n; i++){
		if(parent[i] < i){
			cout << parent[i] << " "<< i << " " << weights[i] << endl;
		}
		else{
			cout << i << " " << parent[i] << " " << weights[i] << endl;
		}
	}
}
		


int main() {
	int n;
	int e;
	cin >> n >> e;
	int** edges = new int*[n];
	for (int i = 0; i < n; i++) {
		edges[i] = new int[n];
		for (int j = 0; j < n; j++) {
			edges[i][j] = 0;
		}
	}

	for (int i = 0; i < e; i++) {
		int f, s, weight;
		cin >> f >> s >> weight;
		edges[f][s] = weight;
		edges[s][f] = weight;
	}
	cout << endl;
	prims(edges, n);

	for (int i = 0; i < n; i++) {
		delete [] edges[i];
	}
	delete [] edges;
}*/


