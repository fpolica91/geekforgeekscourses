#include<bits/stdc++.h>
using namespace std;
int sum;
int numCoins;
vector<int> coins;
vector<int> dp;
const long long md = 1000000007;

int solve(int target){
  int ans = 0;
  // we found a combination that gives zero
  if(target == 0){
    return 1;
  }
  if(dp[target] != -1){
    return dp[target];
  }

  for(auto coin: coins){
    if(target - coin >=0){
       ans = (ans + solve(target - coin)) % md;
       dp[target] = ans;
    }
  }
  return ans;

}

int solve_iter(){
  int memo[sum+1];
  memo[0] = 1;
  for(int i = 1; i <= sum; i++){
    int ans = 0;
    for(int j = 0; j < numCoins; j++){
      if(coins[j] <= i){
        ans = (ans % md + memo[i - coins[j]] % md) % md;
      }
    }
    memo[i] = ans;
  } 
  return memo[sum];
}



int main(){
  cin>> numCoins;
  cin>> sum;
  coins.resize(numCoins);
  dp.resize(sum + 1, -1);
  for(int i= 0; i < numCoins; i++){
    cin>>coins[i];
  }
  cout << solve(sum) % md;
}