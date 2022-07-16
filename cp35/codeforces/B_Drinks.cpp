#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin >> n;
   int k = n;
   double ans;
   
   while(n--){
    double og;
    cin>> og;
    ans+=og;
   }

   cout<<fixed<<setprecision(12)<<ans/k<<endl;
   
}

