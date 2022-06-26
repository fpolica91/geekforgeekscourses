#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
vector<int>g[N];
int c[N];
void dfs(int s){
    c[s]=1;
    for(auto e:g[s]){
        dfs(e);
        c[s]+=c[e];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        g[x].push_back(i);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<(c[i]-1)<<" ";
    }

    return 0;
}

// int n;
// int p[200005];
// int ans[200005];
// vector <int> v[200005];
  
// void dfs(int x){
//     for (auto i:v[x]){
//         dfs(i);
//         ans[x] += ans[i]+1;
//     }
// }
  
// int main() {
//     cin >> n;
//     for (int i = 2; i <= n; i++){
//         cin >> p[i];
//         v[p[i]].push_back(i);
//     }
//     dfs(1);
//     for (int i = 1; i <= n; i++){
//         cout << ans[i] << " ";
//     }
//     cout << "\n";
// }