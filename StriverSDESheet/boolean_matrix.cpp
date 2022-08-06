#include <bits/stdc++.h>
using namespace std;


void setZeroesExtraSpace(vector<vector<int>> &matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  vector<int> row(n, 0);
  vector<int> col(m, 0);
  // use row and col vector to mark the rows and columns that need to be set to 0
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(matrix[i][j] == 0){
        row[i] = -1;
        col[j] = -1;
      }
    }
  }

  for(int i  = 0; i < n; i ++){
    for(int j = 0; j < m; j++){
      if(row[i] == -1 or col[j] == -1){
        matrix[i][j] = 0;
      }
    }
  }
}

void setZeroesBrute(vector<vector<int>> &matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(matrix[i][j] == 0){
        for(int k = 0; k < n; k++){
          if(matrix[k][j] != 0){
            matrix[k][j] = -1;
          }
        }
        for(int k = 0; k < m; k++){
          if(matrix[i][k] != 0){
            matrix[i][k] = -1;
          }
        }
      }
    }
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(matrix[i][j] <= 0){
        matrix[i][j] = 0;
      }
    }
  }
}





int main(){
  vector<vector<int>> matrix = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
  vector<vector<int>> matrix2 = {{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
  setZeroesBrute(matrix2);
  for(int i = 0; i < matrix2.size(); i++){
    for(int j = 0; j < matrix2[0].size(); j++){
      cout << matrix2[i][j] << " ";
    }
    cout << endl;
  }
}