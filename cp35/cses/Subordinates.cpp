#include<bits/stdc++.h>
using namespace std;

int n;
const int MAX = 2e5 + 5;
vector<int>adj[MAX];
int subs[MAX];



void dfs(int v){
  subs[v] = 1;
  for(auto e : adj[v]){
    // recursively iterate for every edge.
    dfs(e);
    subs[v] += subs[e];
  }
}


int main(){
  cin >> n;
  
  for(int i = 2; i <= n; i++){
    int node;
    cin >> node;
    adj[node].push_back(i);
  }
  dfs(1);
  for(int i = 1; i <= n;i++){
    cout << (subs[i] - 1) << " ";
  }
}
