#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  int ans = 0;
  if (n == 7 or n == 4)
  {
    cout << "NO \n";
    return 0;
  }
  while (n > 0)
  {
    int rem = n % 10;
    n /= 10;
    if (rem == 7 or rem == 4)
    {
      ans++;
    }
  }
  if(ans == 4 or ans == 7){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }
  
}
