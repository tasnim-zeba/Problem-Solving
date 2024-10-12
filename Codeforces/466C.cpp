#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1];
    ll s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s==0)
    {
        ll d=0,f=0;
        for(i=0;i<n;i++)
        {
            d=d+a[i];
            if(d==0)f++;
        }
        ll ans=((f-2)*(f-1))/2;
        if(f<3)cout<<0<<endl;
        else cout<<ans<<endl;
        return 0;
    }
    else if(s%3)
    {
        cout<<0<<endl;
        return 0;
    }
    ll p[n+1];
    p[0]=a[0];
    for(i=1;i<n;i++)
    {
        p[i]=p[i-1]+a[i];
    }
    ll ans=0,c=0;
    for(i=0;i<n-1;i++)
    {
        if(p[i]==(s/3))c++;
        if(p[i]==(2*s)/3)ans=ans+c;
    }
    cout<<ans<<endl;
}
