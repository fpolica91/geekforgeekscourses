#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string stones;
  int n;
  cin >> n >> stones;
  int ans = 0;
  for(int i = 0; i < n-1; i++){
    if(stones[i] == stones[i + 1]){
      ++ans;
    }
  }
  cout << ans << "\n";
}
