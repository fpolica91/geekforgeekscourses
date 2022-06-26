#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> graph;
vector<bool> visited;

void dfs(int u){
  vis[u]  = 1;
  for(auto v: graph[u]){
    if(!visited[v]){
      dfs(v);
    }
  }
}


int main(){
  return 0;
}