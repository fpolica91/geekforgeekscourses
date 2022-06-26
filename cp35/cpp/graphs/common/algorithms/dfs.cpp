#include<bits/stdc++.h>
using namespace std;

void dfs_util(vector<vector<int>> &adj, vector<bool> &visited, int current){
  if(visited[current]){
    return;
  }
  cout<<current<<" -> ";
  visited[current] = 1;
  for(auto neighbor: adj[current]){
    if(!visited[neighbor]){
      cout<< neighbor << " " << endl;
      dfs_util(adj, visited, neighbor);
    }
  }
  cout << endl;
}

void dfs(vector<vector<int>> adj){
  int n = adj.size();
  vector<bool> visited(n);
  for(int i = 0; i < n; i++){
    dfs_util(adj, visited, i);
  }
}

int main(){
      dfs({{1, 4},
         {0, 2, 3},
         {1, 3},
         {1, 2},
         {0}});
    
      dfs({{1, 4},
         {0},
         {3},
         {2},
         {0}});
}