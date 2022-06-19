#include<bits/stdc++.h>
using namespace std;
vector<int> memo;
vector<int> dices = {1,2,3,4,5,6};

int sum;
const long long md = 1000000007;

long long solve_iter(){
  int dp[sum+1];
  dp[0] = 1;
  for(int currsum = 1; currsum <= sum; currsum++){
    int ans = 0;
    for(int dice = 1; dice <= sum; dice++){
      if(dice <= currsum){
        ans = (ans % md + dp[currsum - dice] % md) % md;
      }
    }
    dp[currsum] = ans;
  }
  return dp[sum];
}


long long solve(long long target){
  long long ans = 0;

  if(target == 0){
    return 1;
  }
  if(memo[target] != -1){
    return memo[target];
  }

  for(auto d:dices){
    
    if(target - d >= 0){
     ans = (ans + solve(target - d)) % md; 
     memo[target] = ans;
    }
  }

  return ans;
} 


int main(){
  cin>> sum;
  memo.resize(sum + 1, -1);
  cout<< solve_iter() % md; 
}

