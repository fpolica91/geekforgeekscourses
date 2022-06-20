#include<bits/stdc++.h>
using namespace std;
int sum;
int numCoins;
vector<int> coins;
const long long md = 1000000007;
const long long M = 1000000007;
int dp[1000001];
vector<vector<int>> dp2;


int rec(int i, int target){
  if(i >= coins.size()){
    return 0;
  }
  if(target < 0){
    return 0;
  }
  if(target == 0){
    return 1;
  }
  if(dp2[i][target] != -1){
    return dp2[i][target];
  }

  return  dp2[i][target] = (rec(i,target-coins[i] % md) + rec(i + 1, target) % md) % md;
}


// int solve(){
//   dp[0] = 1;
//   for(int i = 1; i <= numCoins; i++){
//     for(int j = 0; j <= sum; j++){
//       if(j - coins[i - 1] >=0){
//         dp[j] +=  dp[j - coins[i - 1]];
//         dp[j] %= md;
//       }
//     }
//   }
//   return dp[sum];
// }



int main(){
  cin>> numCoins;
  cin>> sum;
  coins.resize(numCoins);
  dp2.resize(numCoins + 1, vector<int>(sum + 1, -1));
  for(int i= 0; i < numCoins; i++){
    cin>>coins[i];
  }
  cout << rec(0, sum);
  // cout << solve();
}