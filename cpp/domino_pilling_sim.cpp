/*
You are given a rectangular board of M × N squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

Input
In a single line you are given two integers M and N — board sizes in squares (1 ≤ M ≤ N ≤ 16).

Output
Output one number — the maximal number of dominoes, which can be placed.
*/

#include<iostream>
#include<vector>

using namespace std;

int can_place_vertically(const vector<vector<int>>& matrix, int m, int n, int i, int j){
	if(i+1<m && matrix[i][j] == 0 && matrix[i+1][j] == 0){
		return 1;
	}
	return 0;
}

int can_place_horizontally(const vector<vector<int>>& matrix, int m, int n, int i, int j){
	if(j+1<n && matrix[i][j] == 0 && matrix[i][j+1] == 0){
		return 1;
	}
	return 0;
}

int place_horizontally(vector<vector<int>>&matrix, int m, int n, int i, int j){
	matrix[i][j] = 1;
	matrix[i][j+1] = 1;
	return 1;
}

int place_vertically(vector<vector<int>>&matrix, int m, int n, int i, int j){
	matrix[i][j] = 1;
	matrix[i+1][j] = 1;
	return 1;
}

int main(){
	int m, n;

	cin >> m >> n;

	vector<vector<int>> matrix;
	int num_dominoes = 0;

	for (int i=0; i<m; i++){
      		vector<int> row;
		for(int j=0; j<n; j++){
      			row.push_back(0);
      		}
		matrix.push_back(row);
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
      			if(can_place_vertically(matrix, m, n, i, j)) {
      				place_vertically(matrix, m, n, i, j);
      				num_dominoes++;
      			} else if(can_place_horizontally(matrix, m, n, i, j)){
      				place_horizontally(matrix, m, n, i, j);
				num_dominoes++;
      			} else {
      			}
      		}
	}
	
	cout << num_dominoes;

	return 0;
}
