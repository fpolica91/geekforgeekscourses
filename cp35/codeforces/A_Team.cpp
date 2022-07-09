#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin  >> n;
   int ans = 0;
   while(n--){
    int a, b, c;
    cin >> a >> b >> c;
    int s = 0;
    s+=a;
    s+=b;
    s+=c;
    if(s >= 2) {
      ans++;
    }
   }
   cout << ans << endl;
}

