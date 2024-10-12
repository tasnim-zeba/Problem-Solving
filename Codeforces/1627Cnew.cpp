#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<vector<pair<ll,ll>> >g;
vector<ll>ans;
ll vis[100005];
ll start,k=2;
void dfs(ll vertex)
{
    if(g[vertex].size()==1&&vertex!=start)
    {
        return;
    }
    vis[vertex]=1;
    for(int i=0;i<g[vertex].size();i++)
    {
        ll f=g[vertex][i].first;
        ll s=g[vertex][i].second;
        if(vis[f]==0)
        {
            ans[s]=k;
            if(k==2)
            {
                k=3;
            }
            else
            {
                k=2;
            }
            dfs(f);
        }
    }
}
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        g.clear();
        ans.clear();
        cin>>n;
        ans.resize(n);
        g.resize(n+1);
        for(i=0;i<=n+1;i++)
        {
            vis[i]=0;
        }
        for(i=0;i<n-1;i++)
        {
            int x,y;
            cin>>x>>y;
            g[x].push_back({y,i});
            g[y].push_back({x,i});
        }
        int f=1;
        for(i=1;i<=n;i++)
        {
            if(g[i].size()>=3)
            {
                f=0;
                break;
            }
        }
        if(f==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(g[i].size()==1)
            {
                start=i;
                break;
            }
        }
        dfs(start);
        for(i=0;i<n-1;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
