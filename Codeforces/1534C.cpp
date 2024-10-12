#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll  N=4e5+5,M=1e9+7;
ll vis[400005];
vector<vector<ll>>g(N+1);
void dfs(ll nd)
{
    vis[nd]=1;
    for(auto child:g[nd])
    {
        if(vis[child]);
        else
        {
            dfs(child);
        }
    }
}
int main()
{
    fio
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],b[n+1];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        for(i=1;i<=n;i++)
        {
            g[i].clear();
            vis[i]=0;
        }
        for(i=0;i<n;i++)
        {
            g[a[i]].push_back(b[i]);
            g[b[i]].push_back(a[i]);
        }
        c=0;
        for(i=1;i<=n;i++)
        {
            if(vis[i])continue;
            else
            {
                c++;
                dfs(i);
            }
        }
        ll ans=1;
        while(c--)
        {
            ans=(ans*2)%M;
        }
        cout<<ans<<endl;
    }
}
