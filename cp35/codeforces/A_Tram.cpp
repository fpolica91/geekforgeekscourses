#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int ans = INT_MIN;
  int p = 0;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    p = (p -a) + b;
    ans = max(ans, p);
  }
  cout << ans << "\n";
}
