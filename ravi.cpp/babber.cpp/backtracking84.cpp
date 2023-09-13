#include <bits/stdc++.h> 
//********************************************************
//Q-1 :sudoku solver

bool isSafe(int row, int col, vector<vector<int>>& board, int val){
    for(int i=0; i<board.size(); i++){
        //check for row
        if(board[row][i] == val){
            return false;
        }

        //check for col
        if(board[i][col] == val){
            return false;
        }

        // check for 3*3 matrix
        if(board[3*(row/3) + i/3][3*(col/3) + i%3] == val){
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>>& board){
    int n = board[0].size();

    for(int row=0 ; row<n ; row++){
        for(int col=0 ; col<n ; col++){
            // check cell is empty
            if(board[row][col] == 0){
                for(int val=1 ; val<=9 ; val++){
                    if(isSafe(row, col, board, val)){
                        board[row][col] = val;

                        //check safe place for val push
                        bool nextSolutionPossible = solve(board);
                        if(nextSolutionPossible){
                            return true;
                        }
                        else{
                            //backtracking
                            board[row][col] = 0;
                        }
                    }

                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<int>>& sudoku)
{
	solve(sudoku);
}