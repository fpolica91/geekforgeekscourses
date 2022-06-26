#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> visited(n);
vector<vector<int>> g(n);

void bfs(int u){
  queue<int> q;
  q.push(u);
  visited[u] = 1;
  while(!q.empty()){
    u = q.front();
    q.pop();
    for(auto v: g[u]){
      if(!visited[u]){
        q.push(v);
        visited[v] = 1;
      }
    }
  }
}



int main(){

}