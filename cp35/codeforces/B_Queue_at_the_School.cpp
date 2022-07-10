#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, s;
  string stud;
  cin >> n >> s >> stud;
  int i = 0;
  int h = stud.size();

  while(s--){
    for (int i = 0; i < h; i++)
    {
      if (stud[i] == 'B' and stud[i + 1] == 'G'){
        swap(stud[i], stud[i + 1]);
        i++;
      }
    }
  }
  cout << stud << "\n";
}

