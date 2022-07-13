#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int y;
   string s;
 
   cin>> y;
   while(true){
    y++;
    int a = y / 1000;
    int b = y/ 100 % 10;
    int c = y / 10 % 10;
    int d = y % 10;
    if (a != b && a != c && a != d && b != c && b != d && c != d)
    {
        break;
    }
   }
   cout << y << endl;
   return 0;
}

