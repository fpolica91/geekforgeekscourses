#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int ans = 0;
   int n, h;
   cin>> n >> h;
   while(n--){
    int a;
    cin >> a;
    if(a > h){
      ans += 2;
    }else{
      ans+=1;
    }
   }
   cout << ans;
   
}

