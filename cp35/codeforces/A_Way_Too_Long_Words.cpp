#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
  
   vector<string> words;
   while(n--){
    string input;
    cin >> input;
    words.push_back(input);
   }


   for(int i = 0; i < words.size(); i ++){
      if(words[i].size() > 10){
      string ans; 
      int word_size = words[i].size();
      auto first_chr = words[i][0];
      auto last_chr = words[i][word_size - 1];
      ans = first_chr + to_string(word_size - 2) + last_chr;
      cout << ans << "\n";
      }else {
        cout << words[i] << "\n";
      }
   }
   
}

