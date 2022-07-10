#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a,b;
  cin>> a>> b;
  int ans = 0;
  while(true){
    a*=3;
    b*=2;
    ans++;
    if(a > b){
      break;
    }
  }
  cout << ans << "\n";
}