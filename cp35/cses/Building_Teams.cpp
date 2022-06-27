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
    if(v == parent) continue;
    // if node has not been colored
    if(colors[v] == 0)
      if(!dfs(v, (colors[u]^3), u)) 
        return false;
    if(colors[v] == colors[u])
      return false;
  }

  return true;
}

bool color_all(){
  for(int i = 1; i <= n; i++){
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
   cin >> n >> m;
   g.resize(n + 1);
   colors.resize(n + 1);
   vis.resize(n + 1);
   for(int i = 1; i < m; i++){
      int v, u;
      cin >> v >> u;
      g[u].push_back(v);
      g[v].push_back(u);
   }
   bool ans = color_all();

   if(!ans){
    cout << "IMPOSSIBLE" << " ";
    return 0;
   }
   for(int i = 1; i <= n; i++){
    cout << colors[i] << " ";
   }


   return 0;
}

