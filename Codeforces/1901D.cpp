#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin>>n;
    ll a[n+1];
    ll b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    ll mx=INT_MIN;
    for(i=0;i<n;i++)
    {
        b[i]=max(mx,b[i]);
        mx=max(mx,a[i]+(n-1-i));
    }
    mx=INT_MIN;
    for(i=n-1;i>=0;i--)
    {
        b[i]=max(mx,b[i]);
        mx=max(mx,a[i]+i);
    }
    ll ans=INT_MAX;
    for(i=0;i<n;i++)
    {
        ans=min(ans,b[i]);
    }
    cout<<ans<<endl;
}
