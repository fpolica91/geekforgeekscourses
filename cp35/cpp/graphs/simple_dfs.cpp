#include<bits/stdc++.h>
using namespace std;




void simple_dfs(vector<vector<int>> &adj, int current, vector<bool> &visited){
  if(visited[current]){
    return;
  }
  visited[current] = 1;
  cout << "visited " << current << endl;
  for(auto neighbor: adj[current]){
    if(!visited[neighbor]){
      simple_dfs(adj, neighbor, visited);
    }
  }
}


void add_edge_directed  (vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
}



int main(){
  int v = 5;
  vector<vector<int>> adj(v);
  vector<bool> visited(v);
  add_edge_directed(adj, 0, 1);
  add_edge_directed(adj, 0, 2);
  add_edge_directed(adj, 1, 2);
  add_edge_directed(adj, 2, 3);
  add_edge_directed(adj, 3, 4);
  simple_dfs(adj, 0, visited);
}