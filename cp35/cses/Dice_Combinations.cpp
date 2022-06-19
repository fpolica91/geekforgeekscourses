#include<bits/stdc++.h>
using namespace std;
vector<int> memo;
vector<int> dice = {1,2,3,4,5,6};
#define ll long long
int sum;
const ll md = 1000000007;


ll solve(ll target){
  ll ans = 0;

  cout << "ans " << ans << endl;

  if(target == 0){
    return 1;
  }
  if(memo[target] != -1){
    return memo[target];
  }

  for(auto d:dice){
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
  cout<< solve(sum) % md; 
}

