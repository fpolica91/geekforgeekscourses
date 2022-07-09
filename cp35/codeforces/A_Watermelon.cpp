#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
int n;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   cin >> n;
   string ans;
   if(n == 2){
    ans = "NO";
   }else{
    n % 2 == 0 ? ans = "YES" : ans = "NO";
   }

   cout << ans << "\n";
  
   return 0;
}

