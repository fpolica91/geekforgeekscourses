#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"


vector<vector<int>> fourNumberSum(vector<int> arr, int target) {
  vector<vector<int>> ans;
  int n = arr.size();
  sort(arr.begin(),arr.end());
  for(int i = 0; i < n - 3; i++){
    for(int j = i + 1; j < n - 2; j++){
      int s = j + 1;
      int e = n - 1;
      while(s < e){
        int curr = arr[i] + arr[j] + arr[s] + arr[e];
        if(curr == target){
          ans.push_back({
            arr[i],
            arr[j],
            arr[s],
            arr[e]
          });
          s++;
          e--;
        }
        else if(curr > target){
          e--;
        }
        else{
          s++;
        }
      }
    }
  }
  return ans;
}


int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    vector<vector<int>> ans = fourNumberSum({1,2,3,4,5,6,7,8,9,10}, 12);
    for(int i = 0; i < ans.size(); i++){
      for(auto j : ans[i]){
        cout << j << " ";
      }
      cout << "\n";
    }
   return 0;
}

