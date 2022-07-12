#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin >> t;
   while(t--){
    int n;
    cin >> n;
    n/=2;
    if(n & 1){
      cout << "NO" << "\n";
      continue;
    }
    cout << "YES \n";
    for(int i = 1; i <= n; i++){
      cout << i * 2 << " ";
    }
    for(int i = 1; i < n; i++){
      cout << (i * 2) - 1 << " ";
    }
    cout << (n * 3) - 1 << "\n";
   }

}

