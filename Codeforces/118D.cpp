#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n1,n2,k1,k2,i,j,dp[102][102][12][12],M=100000000;
ll func(ll x,ll y,ll p,ll q)
{
    if(x==0&&y==0)return dp[x][y][p][q]=1;
    if(dp[x][y][p][q]!=-1)return dp[x][y][p][q];
    ll ans=0;
    if(p==0)
    {
        if(y>0)
            ans=(ans+func(x,y-1,k1,q-1))%M;
    }
    else if(q==0)
    {
        if(x>0)
            ans=(ans+func(x-1,y,p-1,k2))%M;
    }
    else if(p&&q)
    {
        if(x>0)
            ans=(ans+func(x-1,y,p-1,k2))%M;
        if(y>0)
            ans=(ans+func(x,y-1,k1,q-1))%M;
    }
     dp[x][y][p][q]=ans;
     return dp[x][y][p][q];
}
int main()
{
    cin>>n1>>n2>>k1>>k2;
    for(int i=0;i<=n1;i++)
    {
        for(int j=0;j<=n2;j++)
        {
            for(int k=0;k<=k1;k++)
            {
                for(int l=0;l<=k2;l++)
                {
                    dp[i][j][k][l]=-1;
                }
            }
        }
    }
    ll ans=func(n1,n2,k1,k2);
    cout<<ans<<endl;
}
