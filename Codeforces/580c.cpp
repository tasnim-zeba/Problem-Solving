#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=1e5+5;
ll n,m,i,j,x,y;
ll a[N];
ll depth[N];
vector<ll>g[N];
void dfs(ll vertex,ll par)
{
    for(ll child:g[vertex])
    {
        if(child==par)continue;
        depth[child]=depth[vertex]+a[child];
        if(a[child]==0&&depth[child]<=m)depth[child]=0;
        dfs(child,vertex);
    }
}
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    depth[1]=a[1];
    dfs(1,-1);
    ll c=0;
    for(i=2;i<=n;i++)
    {
        ///cout<<depth[i]<<" ";
        if(g[i].size()==1&&depth[i]<=m)
        {
            c++;
        }
    }
    cout<<c<<endl;
}
