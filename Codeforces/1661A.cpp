#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        ll b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(i=0;i<n;i++)
        {
            ll x,y;
            x=min(a[i],b[i]);
            y=max(a[i],b[i]);
            a[i]=x;
            b[i]=y;
        }
        ans=0;
        for(i=1;i<n;i++)
        {
            ans=ans+abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
        }
        cout<<ans<<endl;
    }
}
