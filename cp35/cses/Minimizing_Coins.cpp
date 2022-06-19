#include<bits/stdc++.h>
using namespace std;
vector<int> memo;
vector<int> coins;
int numCoins, requiredValue;


int calculate(int currValue){
  if(currValue < 0){
    return INT_MAX;
  }
  if(currValue == 0){
    return 0;
  }
  
  if(memo[currValue] != -1){
    return memo[currValue];
  }

  int minCoins = INT_MAX - 5;
  for(int i = 0; i < numCoins; i++){
    if(coins[i] <= currValue){
      minCoins = memo[currValue] = min(minCoins, calculate(currValue - coins[i]) + 1);
    }
  }

  return minCoins;
}




int main(){
  cin>> numCoins >> requiredValue;
  coins.resize(numCoins);
  memo.resize(requiredValue + 1, -1);
  for(int i=0;i<numCoins;i++){
    cin>>coins[i];
  }

  int solution = calculate(requiredValue);
  if(solution == INT_MAX - 5){
    cout << -1;
  }
    else{
      cout << solution;
    }

}