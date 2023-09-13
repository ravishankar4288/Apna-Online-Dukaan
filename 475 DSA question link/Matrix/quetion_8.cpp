//*****************************************************
//Q-1 :  Find A Specific Pair In Matrix
#include <bits/stdc++.h> 
int findMaxValue(vector<vector<int>>& mat, int n) {
	
	// bruet forec Approach
	int maxi = INT_MIN;

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1; j++){
			int cd = mat[i][j];

			for(int k=i+1; k<n; k++){
				for(int l=j+1; l<n; l++){
					int ab = mat[k][l];
					maxi = max(maxi, ab-cd);
				}
			}
		}
	}
	return maxi;
}