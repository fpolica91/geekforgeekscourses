#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
const int N=2e5+5;
vector<int>parents(N);
vector<int> sizes(N);

int find(int p){
  // if p is its parent
  if(parents[p] == p){
    return p;
  }
  int ans = find(parents[p]);
  parents[p] = ans;
  return ans;
}

void merge(int v, int u){
  v = find(v);
  u = find(u);
  // if they don't have the same parent they are disconnected
  if(v!=u){
    if(sizes[u] < sizes[v]){
      parents[v] = u;
      sizes[v] += sizes[u];
    }
    else {
      parents[u] = parents[v];
      sizes[u] += sizes[v];
    }
  }
}

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   int q;
   cin>> n >> q;

  for(int i = 0; i < n; i++){
    // start each node as its own parent
    parents[i] = i;
    sizes[i] = 1;
  }

   while(q--){
    int type, u, v;
    cin >> type >> u >> v;
    if(type == 1){
      if(find(u) == find(v)){
        cout << 1 << "\n";
      }
      else cout << 0 << "\n";
    }else{
      merge(u, v);
    }

   }
   return 0;
}

