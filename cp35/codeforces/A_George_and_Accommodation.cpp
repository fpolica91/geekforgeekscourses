#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int q;
   cin>> q;
   int ans = 0;
   while(q--){
    int occ, cap;
    cin>> occ >> cap;
    if(occ+2 <= cap){
      ans++;
    }
   }
  cout << ans;
}

