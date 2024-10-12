#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],dp[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        dp[n]=1;
        for(i=n-1;i>=1;i--)
        {
            if((i+a[i])==n)dp[i]=0;
            else if((i+a[i])<n)
            {
                dp[i]=min(dp[i+a[i]+1],1+dp[i+1]);
            }
            else
            {
                dp[i]=dp[i+1]+1;
            }
        }
        cout<<dp[1]<<endl;
    }
}



