#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll dp[100006][2];
vector<ll>g[100006];
vector<pair<ll,ll>>pa;
void dfs(ll x,ll par)
{
    for(ll child:g[x])
    {
        if(child==par)continue;
        else
        {
            dfs(child,x);
            ll vp=pa[x].first,vq=pa[x].second;
            ll cp=pa[child].first,cq=pa[child].second;
            dp[x][0]+=max(abs(vp-cp)+dp[child][0],abs(vp-cq)+dp[child][1]);
            dp[x][1]+=max(abs(vq-cp)+dp[child][0],abs(vq-cq)+dp[child][1]);
        }
    }
}
int main()
{
    fio
    ll t,n,l,r,u,v,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        pa.clear();
        for(i=0;i<=n;i++)
        {
            dp[i][0]=dp[i][1]=0;
            g[i].clear();
        }
        for(i=1;i<=n;i++)
        {
            cin>>l>>r;
            pa.push_back({l,r});
        }
        for(i=1;i<=n-1;i++)
        {
            cin>>u>>v;
            u--;
            v--;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(0,-1);
        cout<<max(dp[0][0],dp[0][1])<<endl;
    }
}

