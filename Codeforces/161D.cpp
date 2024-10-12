#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[50005][505],ans,k,n;
vector<ll>g[50005];
void dfs(ll u,ll par)
{
    dp[u][0]=1;
    for(auto v:g[u])
    {
        if(v==par)continue;
        dfs(v,u);
        for(ll i=1;i<=k;i++)
        {
            dp[u][i]+=dp[v][i-1];
        }
    }
    ans=ans+dp[u][k];
    ll x=0;
    for(auto v:g[u])
    {
        if(v==par)continue;
        for(ll i=0;i<k-1;i++)
        {
            x=x+dp[v][i]*(dp[u][k-i-1]-dp[v][k-i-2]);
        }
    }
    ans=ans+(x/2);
}
int main()
{
    ll i,j,a,b;
    cin>>n>>k;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1,0);
    cout<<ans<<endl;
}
