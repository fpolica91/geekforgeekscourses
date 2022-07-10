#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

vector<int> dragons;

int main(){

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int a,b,c,d,num;
   cin >> a >> b >> c >> d >> num;
   int ans = 0;
   dragons.resize(num+5, 0);
   for(int i = 1; i <= num; i++){
      if(i % a == 0 or i % b == 0 or i % c == 0 or i % d == 0){
        dragons[i] = 1;
      }
   }

   for(int i = 1; i <= num + 1; i++){
      if(dragons[i] == 1){
        ans+= dragons[i];
      }
   }
   cout << ans << "\n";
}
