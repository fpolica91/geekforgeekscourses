#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> apples;
int n; 

ll apple_division(ll w1, ll w2, int curr){


  if(curr == n){
    return abs(w1 - w2);
  } 

  
  else 
    return  min(
      apple_division(w1 + apples[curr], w2, curr + 1),
      apple_division(w1, w2 + apples[curr], curr + 1)
    );


}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll w = 0;
        cin >> w;
        apples.push_back(w);
    }

    ll m = apple_division(0, 0, 0);
    cout << m;
}