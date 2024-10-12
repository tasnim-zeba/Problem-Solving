#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll p[n+2];
        p[0]=0;
        p[1]=a[1];
        for(int i=2; i<=n; i++)
        {
            p[i] = p[i-1] + a[i];
        }
        int indx[n+2];
        for(int i=1; i<=n; i++)
        {
            int low=i, high=n, ans =INT_MAX;
            while(low<=high)
            {
                int mid = low+(high-low)/2;
                ll k=p[mid] - p[i-1];
                if(k>x)
                {
                    ans = min(ans, mid);
                    high = mid-1;
                }
                else{
                   low = mid+1;
                }
            }
            if(ans==INT_MAX)
            {
                indx[i]=n+2;
            }
            else{
                indx[i]=ans+1;
            }
        }
        ll dp[n+3];
        dp[n+1]=0;
        dp[n+2]=0;
        ll ans = 0;
        for(int i=n; i>=1; i--)
        {
            if(a[i]>x)
            {
                dp[i]=dp[indx[i]];
                ans = ans + dp[i];
            }
            else{
                dp[i]=(indx[i]-i-2)+1+dp[indx[i]];
                ans = ans + dp[i];
            }
        }
        cout<<ans<<endl;
    }
}
