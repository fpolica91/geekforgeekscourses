#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   long long n, k;
   cin >> n >> k;
   while(k--){
    if(n % 10 != 0){
      n--;
    }
    else{
      n/=10;
    }
   }
   cout << n << "\n";
}

