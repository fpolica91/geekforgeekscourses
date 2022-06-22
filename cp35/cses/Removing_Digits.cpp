#include<bits/stdc++.h>
using namespace std;
int number;
const int maxN = 1e6;
const int INF = 0x3f3f3f3f;
int N, dp[maxN+1];





int main(){
  cin >> number;
  fill(dp+1, dp+number+1, INF);
  remove_digits(number);
  for(int i = 1; i <= number; i++){
    int curr = i;
    while(curr > 0){
      if(curr % 10 != 0){
        dp[i] = min(dp[i], dp[i -(curr % 10)] + 1);
      }
      curr /= 10;
    }
  }
  cout << dp[number];
}