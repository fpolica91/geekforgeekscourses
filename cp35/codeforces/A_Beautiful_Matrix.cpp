#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

/**
 * in 1 BASED INDEXING "1" is found at (2,5)
 * and the ideal location would be (3,3)
 * the number of steps to move "1" to (3,3) is |3-i| + |3-j|
  0 0 0 0 0
  0 0 0 0 1
  0 0 0 0 0
  0 0 0 0 0
  0 0 0 0 0
*/

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int ans;
   for(int i = 1; i <=5; i++){
    // iterates over rows
    for(int j = 1; j <= 5; j++){
      //  there will be 25 inputs since there are 24 0s and a 1;
      int num;
      cin >> num;
      if(num == 1){
        // the distance to the middle of the array to make it beautiful
        ans = abs(3 - i) + abs(3 -j);
        // break out of loop
        break;
      }
    }
   }
   cout << ans << "\n";
}

