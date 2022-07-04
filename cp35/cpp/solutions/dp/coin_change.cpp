#include <bits/stdc++.h>
using namespace std;
vector<vector<long long>> dp;

int ways_to_make_change(vector<int> coins, int index, int amount){
  // if we have used all the coins, then we can't make change
  if(index == 0){
    return 0;
  }
  // if we've reached the target amount, return 1
  if(amount == 0){
    return 1;
  }
  // if memoized, return the value
  if(dp[index][amount] != -1){
    return dp[index][amount];
  }
  // if the coin is greater than the amount, then we can't make change
  if(amount >= coins[index-1]){
                              // we use the coin and keep using it
    return dp[index][amount] = ways_to_make_change(coins, index, amount-coins[index-1]) 
                              //  we don't use the coin and move to the next coin
                              + ways_to_make_change(coins, index-1, amount);
  }else{
    // the coin is too large so we simply move to the next coin
    return dp[index][amount] = ways_to_make_change(coins, index-1, amount);
  }


}

int main(){
  vector<int> coins = {1,2,3};
  int amount = 4;
  dp.resize(coins.size()+1, vector<long long>(amount+1, -1));
  cout << ways_to_make_change(coins, coins.size(), amount) << "\n";
}