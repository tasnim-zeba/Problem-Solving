#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll a[],ll n)
{
    ll r=0,f=0;
    for(ll i=n-1; i>=0; i--)
    {
        if(a[i]==0)
        {
            f++;
        }
        else
        {
            r=r+f;
        }
    }
    return r;
}
int main()
{
    ll t,i,j,n,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1],d[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
            d[i]=a[i];
        }
        for(i=0; i<n; i++)
        {
            if(!b[i])
            {
                b[i]=1;
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if(d[i])
            {
                d[i]=0;
               break;
            }
        }
        ans=max(func(b,n),max(func(d,n),func(a,n)));
        cout<<ans<<endl;
    }
}


