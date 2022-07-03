#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"



vector<vector<int>> threeNumberSum(vector<int> arr, int target) {
  vector<vector<int>> ans;
  sort(arr.begin(), arr.end());
  int n = arr.size();
  for(int i = 0; i < n; i++){
    int strt = i + 1;
    int nd = n - 1;
    while(strt < nd){
      int currsum = arr[i] + arr[strt] + arr[nd];
      // if the current sum is equal to the target push to the ans vector
      if(currsum == target){
        ans.push_back({
          arr[i],
          arr[strt],
          arr[nd]
        });
        // increment both start and end pointers
        strt++;
        nd--;
      }
      // if the current sum is greater than the target decrement the end pointer decrement the end pointer
      else if(currsum > target){
        nd--;
      }else{
        // if the current sum is less than the target increment the start pointer
        strt++;
      }
    }
  }
  return ans;
}



int main(){
     ios_base::sync_with_stdio(false);
     vector<vector<int>> ans = threeNumberSum({1,2,3,4,5,6,7,8,9,10}, 12);
     for(int i = 0; i < ans.size(); i++){
       for(int j = 0; j < ans[i].size(); j++){
         cout << ans[i][j] << " ";
       }
       cout << "\n";
     }
}

