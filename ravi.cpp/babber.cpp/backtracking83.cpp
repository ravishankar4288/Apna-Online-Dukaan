#include <bits/stdc++.h> 
//********************************************************
//Q-1 : N-Queen problem 

void addSolution(vector<vector<int>> &board, vector<vector<int>> &ans, int n){
	vector<int> temp;

	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			temp.push_back(board[i][j]);
		}
	}
	ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>> &board, int n){
	int x= row;
	int y= col;

	//check for back direc of left side
	while(y>=0){
		if(board[x][y] == 1){
			return false;
			y--;
		}
	}

    x=row;
	y=col;
	//check for down direc of digonal of left side
	while(x>=0 && y>=0){
		if(board[x][y] == 1){
			return false;
			y--;
			x--;
		}
	}
	

	x=row;
	y=col;
	//check for down direc of digonal of left side
	while(x<n && y>=0){
		if(board[x][y] == 1){
			return false;
			y--;
			x++;
		}
	}
	return true;
}
void solve(int col, vector<vector<int>> &board, vector<vector<int>> &ans, int n){
	//base case
	if(col == n){
		addSolution(board, ans, n);
		return;
	}

	//solve one case and remaning solve by recursion
	for(int row=0 ; row<n ; row++){
		if(isSafe(row, col, board, n)){
			//if placing is safe then
			board[row][col] = 1;
			solve(col+1, board, ans, n);

			//backtracking
			board[row][col] = 0;
		}
	}
}

vector<vector<int>> nQueens(int n)
{
	vector<vector<int>> board(n, vector<int>(n,0));
	vector<vector<int>> ans;
	
	solve(0, board, ans, n);
	return ans;
	
}