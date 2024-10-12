#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[2005][2005],a[2005];
ll ruc(ll i,ll j)
{
    if(i==j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    return dp[i][j] =(min(ruc(i+1,j),ruc(i,j-1))+(a[j]-a[i]));
}
int main()
{
    ll n,i,j,ans;
     memset(dp,-1,sizeof(dp));
    ///ll a[2005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ans=ruc(0,n-1);
    cout<<ans<<endl;
}
