#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   vector<int>ws(4, 0);
   int n;
   string s;
   cin>> n >> s;
   for(int i = 0; i < n; i++){
    int w = s[i]-'A';
    ws[w]++;
   }
   int a = ws[0];
   int d = ws[3];
   if(a == d){
    cout << "Friendship \n";
   }else if(a > d){
    cout << "Anton \n"; 
   }else{
    cout << "Danik \n";
   }
   
}

