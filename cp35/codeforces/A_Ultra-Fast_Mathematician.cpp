#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s1, s2;
   cin >> s1 >> s2;
   string ans;
   int n = s1.size();
   for(int i = 0; i < n; i++){
    int a = s1[i]-'0';
    int b = s2[i]-'0';

    int c = a^b;
    char x = c+'0';
    ans+= x;
   }

  cout << ans;
 
}

