#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
#define deadit "\n";

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s1;
  string s2;
  cin >> s1 >> s2;
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
  transform(s2.begin(), s2.end(), s2.begin(), ::tolower); 
  int comparison = s1.compare(s2);
  if(comparison < 0) {
    cout << -1;
  }else{
    cout << comparison;
  }
}
