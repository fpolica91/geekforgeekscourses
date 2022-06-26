#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
int n, m;
int cc = 0;
vector<vector<int>> g;
vector<bool> vis;
vector<int> ans;

void dfs(int u){
  vis[u] = 1;
  for(auto e: g[u]){
    if(!vis[e]){
      dfs(e);
    }
  }
}


void process_count(){
  for(int i = 1; i <= n; i++){
    if(!vis[i]){
      cc++;
      ans.push_back(i);
      dfs(i);
    }
  }
}




int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cin >> n >> m;
   g.resize(n+1);
   vis.resize(n+1);
   for(int i = 0; i < m; i++){
      int u, v;
      cin >> u >> v;
      g[u].push_back(v);
      g[v].push_back(u);
   }
   process_count();
   cout << cc - 1 << "\n";

   if(cc > 1){
    int u = ans[0];
    for(int i = 1; i <= cc; i++){
      int v = ans[i];
     cout << u << " " << v << endl;
      u = v;
    }
   }
   

   return 0;
}

