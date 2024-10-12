#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const N=1e5+5;
vector<int>g[N];
int cnt = 0;
int dfs(int u, int p, int sz)
{
    int ans = 1;
    for(auto v: g[u])
    {
        if(v==p)continue;
        ans = ans + dfs(v, u, sz);
    }
    if(ans>=sz)
    {
        cnt++;
        return 0;
    }
    else return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            g[i].clear();
        }
        for(int i=1; i<n; i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int l=1, h=n,m;
        while((h-l)>1)
        {
            m=(l+h)/2;
            cnt = 0;
            dfs(1, 0, m);
            if(cnt>k)
            {
                l=m;
            }
            else{
                h=m;
            }
        }
        cout<<l<<endl;
    }
}
