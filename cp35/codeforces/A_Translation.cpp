#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   string s1;
   string s2;
   cin >> s1 >> s2;
   if(s1.size() != s2.size()){
    cout << "NO\n";
    return 0;
   }
   int i = 0; 
   int j = s2.size() - 1;
   while(i <= s1.size() - 1 and j >=0){
    char a = s1[i];
    char b = s2[j];
    if(a != b){
      cout << "NO\n";
      return 0;
    }
    i++;
    j--;
   }
   cout << "YES\n";
}

