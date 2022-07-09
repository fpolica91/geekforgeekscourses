#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int q;
   cin >> q;
   int ans = 0;
   while(q--){
    string s;
    cin >> s;
    bool increment = s.find("++")!= string::npos;
    bool decrement = s.find("--")!= string::npos;
    if(increment){
      ++ans;
    }
    if(decrement){
      --ans;
    }
   }
   cout << ans << "\n";
}

