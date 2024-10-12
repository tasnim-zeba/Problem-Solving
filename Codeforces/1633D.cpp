#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll b[n+1],c[n+1],v[10005],wt[n+1];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(i=0;i<=1001;i++)
        {
            v[i]=INT_MAX;
        }
        v[1]=0;
        for(i=1;i<=1000;i++)
        {
            for(j=i;j>=1;j--)
            {
                ll x=i+i/j;
                if(x>1000)break;
                v[x]=min(v[x],1+v[i]);
            }
        }
        ll dp[n+1][k+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=k;j++)
            {
                dp[i][j]=0;
            }
        }
        s=0;
        for(i=0;i<n;i++)
        {
            wt[i]=v[b[i]];
            s=s+wt[i];
        }
        if(k>=s)
        {
            ll ans=0;
            for(i=0;i<n;i++)ans=ans+c[i];
            cout<<ans<<endl;
            continue;
        }
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=k;j++)
            {
                dp[i][j]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(wt[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],c[i-1]+dp[i-1][j-wt[i-1]]);
                }
            }
        }
        cout<<dp[n][k]<<endl;
    }
}
