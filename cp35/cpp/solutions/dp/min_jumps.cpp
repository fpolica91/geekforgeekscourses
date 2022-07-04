#include <bits/stdc++.h>
using namespace std;
const int N = 100000;
vector<int> dp(N, -1);

int jumps(vector<int> arr, int index, int end){
        // since we are looking for min we initialize to INT_MAX
        int ans = INT_MAX;
    
        if(index >= end - 1){
            return 0;
        }

        if(dp[index] != -1){
            return dp[index];
        }
    
        
        for(int i = 1; i <= arr[index]; i++){
            int temp = 1 + jumps(arr, index + i, end);
            ans =  min(ans, temp);
        }

        return dp[index] = ans;
        return ans;
        
    }
        
    int minimumjumps(vector<int> arr,int n){
        int ans = jumps(arr, 0, n);
        return ans;
    }

    int main(){
      vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
      int n = arr.size();

      vector<int> arr2 = {1,4,3,2,6,7};
      int n2 = arr2.size();

      vector <int> arr3 = {1,2,3,4,5,6,7,8,9,10};
      int n3 = arr3.size();
      cout << "expected: 4 ";
      cout << "actual: " << minimumjumps(arr3, n3) << "\n";
  


      // cout << "expected: 3 ";
      // cout << minimumjumps(arr, n) << "\n";

      // cout << "expected: 2 ";
      // cout << minimumjumps(arr2, n2) << "\n";
  
    }