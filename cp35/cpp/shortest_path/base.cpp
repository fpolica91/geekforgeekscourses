    #include<bits/stdc++.h>
    using namespace std;  
    #define pb push_back
    const int N = 1e5+5;
    const int mx = INT_MAX -10;


    



    int main(){
      // <weight, node> 
      // because we want to sort by weight
      vector<int> distance(N, mx);
      int source;
      vector<vector<int>>g;
      priority_queue<pair<int, int>> pq;
      pq.push({0, source});
      distance[source] = 0;
      // while queue is not empty
      while(!pq.empty()){
        auto top = pq.top();
        int weight = -1 * top.first;
        int node = top.second;
        for(auto ng:g[node]){
          if(distance[ng] > weight+ng.second){
            distance[ng] = w+ng.second;
            pq.push({-1*distance[ng], ng});
          }
        }
      }
    }