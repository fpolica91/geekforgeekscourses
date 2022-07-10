#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<char> letters(26,0);
   char open;
   cin>> open;
   while(true){
    char l;
    cin>>l;
    if(l == '}'){
      break;
    }
    int index = l-'a';
    letters[index]=1;
   }
   int ans = 0;
   for(int i = 0; i < 26; i++){
    ans+=letters[i];
   }
   cout << ans << "\n";
}

