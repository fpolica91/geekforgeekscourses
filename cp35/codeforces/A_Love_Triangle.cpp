#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int liked_by[50005];

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++){
      cin >> liked_by[i];
   }
   
   for(int i = 1; i <= n; i++){
      // curr element 
      int a = liked_by[i];
      // liked by current
      int b = liked_by[a];
      //  liked by what current likes
      int c = liked_by[b];
      if(a == liked_by[c]){
         cout <<"YES\n";
         return 0;
      }
   }

   cout << "NO\n";

}

