#include<bits/stdc++.h>
using namespace std;



void add_edge_directed  (vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
}

void add_indirected_edge(vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print_graph(vector<vector<int>> &adj){
    for(int i=0; i<adj.size(); i++){
        cout<<i<<" -> ";
        for(auto edge: adj[i]){
            cout << edge << " ";
        }
        cout<<endl;
    }
}
 

int main(){

  int v = 5;
  vector<vector<int>> adj(v);
  add_indirected_edge(adj, 0, 1);
  add_indirected_edge(adj, 0, 2);
  add_indirected_edge(adj, 1, 2);
  add_indirected_edge(adj, 2, 3);
  add_indirected_edge(adj, 3, 4);
  print_graph(adj);


}