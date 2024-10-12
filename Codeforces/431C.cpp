#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=1e9+7;
ll dp[105][105],d;
ll func(ll s,vector<ll>&coins,ll x)
{
    if(s==0&&x>=d)return dp[s][x]=1;
    else if(s==0&&x<d)return dp[s][x]=0;
    if(dp[s][x]!=-1)return dp[s][x];
    ll ans=0;
    for(auto coin:coins)
    {
        if((s-coin)>=0)
        {
            ans=(ans+func((s-coin),coins,max(x,coin)))%M;
        }
    }
    return dp[s][x]=ans;
}
int main()
{
    ll s,n,i,j,ans;
    cin>>s>>n>>d;
    vector<ll>a;
    for(i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    memset(dp,-1,sizeof(dp));
    ans=func(s,a,0);
    ///if(ans==INT_MIN)ans=0;
    cout<<ans<<endl;
}
