#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[502][502][25],n,m,k,i,j;
ll r[502][502];
ll c[502][502];
ll fun(ll i,ll j,ll f)
{

    if(f==0)
    {
    return 0;
    }
    if(dp[i][j][f]!=-1)
    {
    return dp[i][j][f];
    }
    ll ans=LLONG_MAX;
    if(i>0)
    {
    ans=min(ans,c[i-1][j]+fun(i-1,j,f-1));
    }
    if(i<n-1)
    {
    ans=min(ans,c[i][j]+fun(i+1,j,f-1));
    }
    if(j>0)
    {
    ans=min(ans,r[i][j-1]+fun(i,j-1,f-1));
    }
    if(j<m-1)
    {
    ans=min(ans,r[i][j]+fun(i,j+1,f-1));
    }
    return dp[i][j][f]=ans;
}
int main()
{
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            cin>>r[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    if(k%2!=0)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<-1<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ll res=fun(i,j,k/2);
            cout<<2*res<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    }

    return 0;
}
