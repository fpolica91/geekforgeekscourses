#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string word;
  cin >> word;
  int l=0;
  int u=0;

  for(char w:word){
    if(isupper(w)){
      u++;
    }else{
      l++;
    }
  }
  
  if(l >= u){
    transform(word.begin(), word.end(), word.begin(), ::tolower); 
  }else{
     transform(word.begin(), word.end(), word.begin(), ::toupper);
  }
  cout << word << "\n";
}
