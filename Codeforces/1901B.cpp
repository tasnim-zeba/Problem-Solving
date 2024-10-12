#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        a[0]=1;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>a[i-1])
            {
                ans=ans+a[i]-a[i-1];
            }
        }
        cout<<ans<<endl;
    }
}
