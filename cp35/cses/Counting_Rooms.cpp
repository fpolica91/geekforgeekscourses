#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"


// 5 8
// ########
// #..#...#
// ####.#.#
// #..#...#
// ########
// represent height and width of the room
int n, m, rooms;
vector<vector<bool>> visited; // tracks visited and impossible to visit
vector<pair<int, int>> moves = {
    {-1, 0},  // up
    {1, 0 },  // down
    {0, -1},  // left
    {0, 1}    //  right
  };


bool isValid(int x, int y){
  // is out of bounds
  if(x < 0 || x >= n || y < 0 || y >= m){
    return false;
  }
  // it has been visited
  if(visited[x][y]){
    return false;
  }
  // neither vistied nor out of bounds
  return true;
}

void dfs(int row, int col){
  visited[row][col] = true;
  for(auto move: moves){
    if(isValid(row + move.first , col + move.second)){
      dfs(row + move.first, col + move.second);
    }
  }
}


void solve(){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(!visited[i][j]){
        // for each location map the room
        dfs(i, j);
        rooms++;
      }
    }
  }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    visited.resize(n);

    for(int i = 0; i < n; i++){
      visited[i].resize(m);
    }
 


    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        char c; 
        cin >> c;
        if(c == '#'){
          visited[i][j] = 1;
        }
      }
    }
    solve();
    cout << rooms << "\n";
}