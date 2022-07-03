#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
vector<int>parents;
vector<int> ranks;
int size;

int find(int x){
  if(parents[x] == x){
    return x;
  }
  int ans = find(parents[x]);
  parents[x] = ans;
  return ans;
}

bool merge(int v, int u){
  u = find(u);
  v = find(v);
  if(u != v){
    // if v is a larger connected component
    if(ranks[v] >= ranks[u]){
      parents[u] = v;
      ranks[v] += ranks[u];
    }
    else{
      parents[v] = u;
      ranks[u] += ranks[v];
    }
    size--;
    return true;
  }
  return false;
}

bool cmp(pair<pair<int,int>,int>a,pair<pair<int,int>,int>b){
  // comparator to sort by the cost of repair
    return a.second<b.second;
}


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, m;
   cin >> n >> m;
   size = n;
   vector<pair<pair<int,int>,int>>v;
    while(m--){
      // a = road a, b = road b 
      // there is road a - b;
      //  c = cost of repair
      int a, b, c;
      cin>> a >> b >> c;
      v.push_back({{a,b},c});
    }

    parents.resize(n+1);
    ranks.resize(n+1);
    for(int i = 1; i <= n; i++){
      parents[i] = i;
      ranks[i] = 1;
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(auto e:v){
      // first city
      int a = e.first.first;
      // second city
      int b = e.first.second;
      // cost to repair road
      int w = e.second;
      if(merge(a,b)){
        ans+=w;
      }
    }
    cout << ans;
    return 0;
}

