#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j,p,c;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    int dp[n+2][4];
    for(i=0;i<=n;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==0)
            {
                dp[i][j]=0;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<3;j++)
        {
             if(a[i]==0)
                {
                    dp[i][j]=dp[i-1][j]+1;
                }
            else if(j==0)
            {
                dp[i][j]=min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))+1;
            }
            else  if(j==1)
            {
                if(a[i]==1||a[i]==3)
                {
                    dp[i][j]=min(dp[i-1][0],dp[i-1][2]);
                }
                else if(a[i]==2)
                {
                    dp[i][j]=dp[i-1][j]+1;
                }

            }
            else  if(j==2)
            {
                if(a[i]==2||a[i]==3)
                {
                    dp[i][j]=min(dp[i-1][0],dp[i-1][1]);
                }
                else if(a[i]==1)
                {
                    dp[i][j]=dp[i-1][j]+1;
                }
            }
        }
    }
int    ans=INT_MAX;
        for(j=0;j<3;j++)
        {
           ans=min(ans,dp[n][j]);
        }
        cout<<ans<<endl;
}
