#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n; 
   cin>>n;
   int ans = 1;
   int prev;
   vector<string> m;

   while(n--){
    string s;
    cin >> s;
    m.emplace_back(s);
   }

  for(int i = 0; i < m.size()-1; i++){
    if(m[i][1] == m[i+1][0]){
      ans++;
    }
  }
  cout << ans;
}

