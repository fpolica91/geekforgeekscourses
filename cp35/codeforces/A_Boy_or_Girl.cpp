#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"
vector<int> names(26, 0);

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string name;
  cin >> name;
  int n = name.size();


  for(int i = 0; i <= n; i++){
    int s = name[i] - 'a';
    names[s]=1;
  }

  int sum = 0;

  for(int i = 0; i <= 26; i++){
    if(names[i] == 1){
      sum += names[i];
    }
  }
  if(sum % 2 == 0){
    cout << "CHAT WITH HER!" << "\n";
  }else{
    cout << "IGNORE HIM!" << "\n";
  }
}

