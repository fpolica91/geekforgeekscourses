#include<bits/stdc++.h>
using namespace std;



void add_edge_directed  (vector<vector<int>> &adj, int u, int v){
    adj[u].push_back(v);
}


void print_graph(vector<vector<int>> &adj){
    for(int i=0; i<adj.size(); i++){
        cout<<i<<" -> ";
        for(int j=0; j<adj[i].size(); j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
 

int main(){

  int v = 5;
  vector<vector<int>> adj(v);
  add_edge_directed(adj, 0, 1);
  add_edge_directed(adj, 0, 2);
  add_edge_directed(adj, 1, 2);
  print_graph(adj);


}