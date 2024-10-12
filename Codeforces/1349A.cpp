#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n+1],g[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    g[n]=a[n];
    for(i=n-1;i>=1;i--)
    {
        g[i]=__gcd(g[i+1],a[i]);
    }
    ll ans;
    ans=(a[1]*g[2])/(__gcd(a[1],g[2]));
    for(i=2;i<n;i++)
    {
        j=(a[i]*g[i+1])/(__gcd(a[i],g[i+1]));
       ans=__gcd(ans,j);
    }
    cout<<ans<<endl;
}
