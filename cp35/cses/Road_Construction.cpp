#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
int n = 2e5+5;
vector<int>parents(n);
vector<int> sizes(n);
int cc;
int x;



int find(int x){
  if(parents[x] == x){
    return x;
  }
  int ans = find(parents[x]);
  parents[x] = ans;
  return ans;
}

int merge(int v, int u){
    u = find(u);
    v = find(v);
    cc--;
    if(sizes[v] < sizes[u]){
      swap(v, u);
    }
    parents[u] = v;
    sizes[v] += sizes[u];
    return sizes[v];
}



int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);


   cin >> cc >> x;
   int c = cc;

   for(int i = 1; i <= c; i++){
    parents[i] = i;
    sizes[i] = 1;
   }


   int mx = 1;
   while(x--){
    int v, u;
    cin>> v >> u;
    if(find(v) != find(u)){
      mx = max(mx, merge(v,u));
      cout << cc << " ";
      cout << mx << "\n";
    }
   }
}

