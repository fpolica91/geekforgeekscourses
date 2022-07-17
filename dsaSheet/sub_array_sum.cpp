#include <bits/stdc++.h>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long sum)
{
  int start = 0;
  long long curr_sum = arr[0];
  for (int i = 1; i <= n; i++)
  {
    while (curr_sum > sum and start < i - 1)
    {
      curr_sum = curr_sum - arr[start];
      start++;
    }

    if (curr_sum == sum)
    {
      return {
          start + 1,
          i};
    }

    curr_sum += arr[i];
  }

  return {
      -1
  };
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
