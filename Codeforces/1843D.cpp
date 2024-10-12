#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const N=2e5+10;
vector<ll>g[N];
vector<ll>v(N+1);
void dfs(int x,int p)
{
    int f=0;
    for(auto it:g[x])
    {
        if(it==p)continue;
        f=1;
        dfs(it,x);
        v[x]+=v[it];
    }
    if(f==0)
    {
        v[x]=1;
    }
}
int main()
{
    ll t,n,i,j,x,y,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<=n;i++)
        {
            g[i].clear();
            v[i]=0;
        }
        for(i=1;i<n;i++)
        {
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1,-1);
        cin>>q;
        while(q--)
        {
            cin>>x>>y;
            ll ans=v[x]*v[y];
            cout<<ans<<endl;
        }
    }
}
