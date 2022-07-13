#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s;
   cin >> s;
   int n = s.size();
   int a , b = 0;
   for(int i = 0; i < n; i++){
    if(s[i] == '0'){
      a++;
    }
    if(s[i] == '1'){
      b++;
    }
    if(a >= 7 or b >= 7){
      cout << "YES";
      return 0;
    }
    if(a < 7 and s[i] == '1'){
      a = 0;
    }
    if(b < 7 and s[i] == '0'){
      b = 0;
    }

   }
   if(a >= 7 or b >= 7){
    cout << "YES";
    return 0;
   }

   cout << "NO";


}

