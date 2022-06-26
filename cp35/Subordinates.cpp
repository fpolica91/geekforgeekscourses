#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
vector<int>g[N];
int cnt[N];
void dfs(int s){
    cnt[s]=1;
    for(auto e:g[s]){
        dfs(e);
        cnt[s]+=cnt[e];
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int x;
        cin>>x;
        cout << x << " ";
        g[x].push_back(i);
    }

    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<(cnt[i]-1)<<" ";
    }

    return 0;
}


