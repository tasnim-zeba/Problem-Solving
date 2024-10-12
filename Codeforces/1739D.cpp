#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<ll>>g(200005);
ll depth[200005];
void dfs(ll nd,ll par)
{
    for(auto child:g[nd])
    {
        if(child==par)continue;
        depth[child]=depth[nd]+1;
        dfs(child,nd);
    }
}
int main()
{
    ll t,n,k,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            g[i].clear();
            depth[i]=0;
        }
        for(i=2;i<=n;i++)
        {
            cin>>x;
            if(x!=i)
            {
                g[x].push_back(i);
                g[i].push_back(x);
            }
        }
        dfs(1,-1);
    vector<ll>v;
        for(i=1;i<=n;i++)
        {
            if(depth[i]>1&&g[i].size()==1)v.push_back(depth[i]);
        }
        ll l,r,m;
        l=1,r=n;
        x=n;
        while(l<=r)
        {
            m=(l+r)/2;
            ll c=0;
            for(i=0;i<v.size();i++)
            {
                c=c+(v[i]/m);
                if(v[i]%m&&v[i]/m)c++;
            }
            if(c<=k)
            {
                x=min(x,m);
                r=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        cout<<x<<endl;
    }
}
