#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int price, r;
   cin >> price >> r;

  // if the price minutes the r coin is divisble by ten, we only need to buy one shovel.
  // example if shovel cost 237 and r coin is 7 we can use the 7 and 23 tens
   if((price - r) % 10 == 0){
    cout << 1 << "\n"; 
    return 0;
   }
    
  // if price of shovel is divisble by 10 then we only need to buy one shovel
  else if(price % 10 == 0){
     cout << 1 << "\n";
     return 0;
  }

  // i reprensets the quantity of shovels.
  int i = 2;

  while(true){
    int curr = (price * i);
    // if current cost of i shovels can be paid by either full 10s or 10s + r 
    // then we return i which denotes the number of shovels that we purchased. 
    if((curr - r) % 10 == 0 or (curr % 10) == 0){
      cout << i << "\n";
      break;
    }
    i++;
  }
}

