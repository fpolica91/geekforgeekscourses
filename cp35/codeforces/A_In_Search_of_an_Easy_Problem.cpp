#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int q;
   cin >> q;
   while(q--){
    int ans;
    cin>> ans;
    if(ans == 1){
      cout << "HARD";
      return 0;
    }
   }
   cout << "EASY";
}

