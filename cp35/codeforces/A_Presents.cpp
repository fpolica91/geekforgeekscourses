#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<int> m;
   int n;
   cin>>n;
   m.resize(n+5);
   for(int i = 1; i <= n; i++){
    int b;
    cin >> b;
    // cout << "indx: " << b  << " elem :" << i << endl;
    m[b] = i;
   }
   for(int i = 1; i <= n; i++){
    cout << m[i] << " ";
   }
   
  
}

// https://codeforces.com/problemset/problem/136/A