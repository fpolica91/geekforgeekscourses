#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> ans(numRows);
  for (int i = 0; i < numRows; i++)
  {
    ans[i].resize(i + 1);
    // make first and last element both 1;
    ans[i][0] = 1;
    ans[i][i] = 1;
    for (int j = 1; j < i; j++)
    {
      ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }
  }
  return ans;
}
