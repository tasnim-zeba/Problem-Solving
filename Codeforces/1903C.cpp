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
        ll a[n+1],suf[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        suf[n]=a[n];
        for(i=n-1;i>=1;i--)
        {
            suf[i]=suf[i+1]+a[i];
        }
        ll ans=suf[1];
        for(i=2;i<=n;i++)
        {
            if(suf[i]>0)ans=ans+suf[i];
        }
        cout<<ans<<endl;
    }
}


