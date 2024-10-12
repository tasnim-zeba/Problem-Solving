#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,t,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(i=3;i<=n;i++)
    {
        if(a[i]>0)ans=ans+a[i];
    }
    if(n>=2)
    {
        if(a[2]>0)
        {
            if(a[2]+a[1]>0)
            {
                ans=ans+a[2]+a[1];
            }
        }
        else
        {
            if(a[1]>0)ans+=a[1];
        }
    }
    else if(a[1]>0)ans+=a[1];
    cout<<ans<<endl;
    }
}
