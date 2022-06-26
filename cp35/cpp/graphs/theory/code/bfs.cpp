#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> visited(6);
vector<vector<int>> g(6);

void bfs(int u){
  queue<int> q;
  q.push(u);
  visited[u] = 1;
  while(!q.empty()){
    u = q.front();
    cout << u << " ";
    q.pop();
    for(auto v: g[u]){
      if(!visited[v]){
        q.push(v);
        visited[v] = 1;
      }
    }
  }
}



int main(){
  n = 5;
  g[1].push_back(2);
  g[1].push_back(3);
  g[2].push_back(4);
  g[3].push_back(4);
  g[4].push_back(5);

  bfs(1);
  return 0;
}