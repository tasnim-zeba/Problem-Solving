#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,x,ans,pj,c;
    cin>>n;
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int dp[n+1][3];
    dp[0][0]=dp[0][1]=dp[0][2]=0;
    for(i=1;i<=n;i++)
    {
        dp[i][0]=min(dp[i-1][0],min(dp[i-1][1],dp[i-1][2]))+1;
        if(a[i]==0)
        {
            dp[i][1]=dp[i-1][1]+1;
            dp[i][2]=dp[i-1][2]+1;
        }
        else if(a[i]==1)
        {
            dp[i][1]=dp[i-1][1]+1;
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
        else if(a[i]==2)
        {
            dp[i][2]=dp[i-1][2]+1;
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
        }
        else if(a[i]==3)
        {
            dp[i][1]=min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=min(dp[i-1][0],dp[i-1][1]);
        }
    }
    cout<<min(dp[n][0],min(dp[n][1],dp[n][2]))<<endl;
}
