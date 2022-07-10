#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int k,n,w;
   cin >> k >> n >> w;
   int total = 0;
   for(int i  = 1 ; i <= w; i++){
    total += (k * i);
   }
  if(total > n){
    cout << total - n;
  } else{
    cout << 0;
  }
}

