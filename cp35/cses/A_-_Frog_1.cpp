#include <bits/stdc++.h>
using namespace std;
int N;
const int MAX_N = 1e5;
vector<int> rocks(MAX_N + 1);
vector<int> memo(1e5, -1);
int dp[MAX_N + 1];

int rec(int i)
{
  if (i == N - 1)
  {
    return 0;
  }
  int step1 = INT_MAX;
  int step2 = INT_MAX;

  if (memo[i] != -1)
  {
    return memo[i];
  }

  if (i + 1 < N)
  {
    step1 = rec(i + 1) + abs(rocks[i] - rocks[i + 1]);
    memo[i] = step1;
  }
  if (i + 2 < N)
  {
    step2 = rec(i + 2) + abs(rocks[i] - rocks[i + 2]);
    memo[i] = step2;
  }

  return min(step1, step2);
}

int main()
{
  cin >> N;
 
  
  for (int i = 1; i <= N; i++)
  {
    cin >> rocks[i];
  }

  dp[1] = 0;
	for (int i = 2; i <= N; i++) {
		dp[i] = INT32_MAX;  // initially set our values to INF
	}


  for (int i = 1; i <= N; i++)
  {
    if(i + 1 <= N){
      dp[i + 1] = min (
          dp[i + 1],
          dp[i] + abs(rocks[i] - rocks[i + 1])
      );
    }
    if(i + 2 <= N){
      dp[i + 2] = min(
        dp[i + 2],
        dp[i] + abs(rocks[i] - rocks[i + 2])
      );
    }
  }
  cout << dp[N] << endl;
}