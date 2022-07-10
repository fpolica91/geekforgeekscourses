#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int des;
   cin >> des;
   int ans = 0;
   while(des){
    if(des >= 5){
      des -= 5;
    }
    else if(des >= 4){
      des-=4;
    }
    else if(des >= 3){
      des-=3;
    }
    else if(des >= 2){
      des-=2;
    }else{
      des-=1;
    }
    ans++;
   }
  cout << ans << "\n";
}

