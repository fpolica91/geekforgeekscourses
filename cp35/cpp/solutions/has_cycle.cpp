#include <bits/stdc++.h>
using namespace std;
vector<int> visited;
bool hasSingleCycle(vector<int> array) {
  int n = array.size();
  visited.resize(n, 0);  // initialize the visited array
  int curr = 0;
  int count = 0;
  while(true){
    count++;
    curr = (curr + array[curr]) % n;
    curr = (curr + n) % n;
    visited[curr]++;
    if(curr == 0){
      return count == n;
    }
    if(count == n){
      return false;
    }
  }
}


int main(){
  hasSingleCycle({2, 3, 1, -4, -4, 2});
  for(int i = 0; i < visited.size(); i++){
    cout << visited[i] << " ";
  }
  // cout << hasSingleCycle({2, 3, 1, -4, -4, 2}) << "\n";
  
}