#include<bits/stdc++.h>
using namespace std;
int n;

vector<vector<int>> adj(n);
vector<int> visited(n);


void dfs(int u) {
  visited[u] = 1;
  for(auto v: adj[u]){
    if(!visited[v]){
      dfs(v);
    }
  }
}


int connected_components(){
  int cc = 0; 
  for(int u = 1; u <= n; u++){
    dfs(u);
    cc++;
  }
}


int main(){
  return 0;
}