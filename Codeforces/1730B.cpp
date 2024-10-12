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
        ll a[n+1],p[n+1];
        for(i=1;i<=n;i++)
        {
           cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        ll mn=a[1]-p[1], mx= a[1]+p[1];
        for(i=1;i<=n;i++)
        {
            mx=max(mx,a[i]+p[i]);
            mn=min(mn,a[i]-p[i]);
        }
        double d=(mx+mn)/2.0;
        cout<<fixed<<setprecision(6)<<d<<endl;
    }
}
