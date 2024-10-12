#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+2],dp[n+2],h[n+2],vis[n+2];
        ///vector<ll>v[n+2];
        dp[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            ///v[a[i]].push_back(i);
            dp[i]=0;
            h[i]=0;
            vis[i]=0;
        }
        ll ans=0;
        for(i=1;i<=n;i++)
        {
            dp[i]=max(dp[i],dp[i-1]);
            if(vis[a[i]])
            dp[i]=max(dp[i],i+1+h[a[i]]);
            /*for(j=0;j<v[a[i]].size()&&v[a[i]][j]<i;j++)
            {
                dp[i]=max({i-v[a[i]][j]+1+dp[v[a[i]][j]-1],dp[i]});
            }*/
            if(vis[a[i]])
            h[a[i]]=max(h[a[i]],dp[i-1]-i);
            else h[a[i]]=dp[i-1]-i;
            ans=max(ans,dp[i]);
            vis[a[i]]=1;
        }
        cout<<ans<<endl;
    }
}
