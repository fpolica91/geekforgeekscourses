#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
using ll = long long int;
vector<ll> prefix;


// static range sum

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n, q;
   cin>> n >> q;
   prefix.resize(n + 1);
   prefix[n + 1] = 0;
   
   for(int i = 1; i < n + 1; i++){
      int val;
      cin>> val;
      prefix[i] = prefix[i - 1]+ val;
   }

    for(int i = 1; i <= n; i++){
      int l, r;
      cin >> l >> r;
      cout << prefix[r] - prefix[l] << endl;
    }  
}

