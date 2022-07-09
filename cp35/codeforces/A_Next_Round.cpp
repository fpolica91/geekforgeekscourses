#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n,k;
   cin >> n >> k;
   int ans = 0; 
   vector<int> p(n + 1);
   for(int i = 0; i < n; i++){
    int score;
    cin>> score;
    p[i] = score;
   }
   
   int low = p[k-1];
 

  // the array is in descending order hence if the first element is 0 then all others will be <= 0
   if(p[0] == 0){
    ans = 0;
    cout << ans << "\n";
    return 0;
   }
    

   for(int i = 0; i <= n; i++){
    // if at any point score is 0 we break only scores > 0 are acceptable.
    if(p[i] == 0){
      break;
    } 
   /**
    * test clearly states if score is less greater than
    * or equal to lowest grade. hence we use that given condition here.
    */

    if(p[i] >= low){
      ans++;
    }
   }
   cout << ans << "\n";
   return 0;
}

