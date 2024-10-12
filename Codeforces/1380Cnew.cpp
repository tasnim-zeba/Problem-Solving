#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,i,j,ans,b,f,q,c,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll a[n+1],p[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(x%a[i]==0)
            {
                p[i]=x/a[i];
            }
            else
            {
                p[i]=(x/a[i])+1;
            }
        }
        ll dp[n+1]={0};
        /*for(i=0;i<n;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        */
        for(i=n-1;i>=0;i--)
        {

            if((i+p[i])==n)
            {
                dp[i]=1;
            }
            else if((i+p[i])<n)
            {
                dp[i]=1+dp[i+p[i]];
            }
            else
            {
                dp[i]=0;
            }
        }
        /*for(i=0;i<n;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
        */
        cout<<*max_element(dp,dp+n)<<endl;
    }
    return 0;
}

