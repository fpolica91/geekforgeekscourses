#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
int n, m;
vector<vector<int>> g;
vector<bool> vis;
vector<int> colors;


bool dfs(int u, int color, int parent){
  vis[u] = true;
  colors[u] = color;
  for(auto v: g[u]){
    if(parent == v)
      continue;
      // this node has not been colored yet
    if(colors[v] == 0)
      if(!dfs(v, (colors[u]^3), u)){
        return false;
      }
    if(colors[u] == colors[v])
      return false;
  }
  return true;
}

bool isBipartite(){
  for(int i = 1; i <= g.size(); i++){
    if(!vis[i]){
      if(!dfs(i, 1, -1)){
        return false;
      }
    }
  }
  return true;
}





int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   g.resize(5);
   colors.resize(5);
   vis.resize(5);
    g[1].push_back(2);
    g[2].push_back(1);
    g[1].push_back(3);
    g[3].push_back(1);
    g[1].push_back(4);
    g[4].push_back(1);
    watch(isBipartite());
   
}

