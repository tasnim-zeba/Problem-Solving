#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void func(ll a[],ll n,ll l,ll r)
{
    ll ans;
    if(l==1)
    {
        ans=a[r-1];
    }
    else
    {
        ans=a[r-1]-a[l-2];
    }
    cout<<ans<<endl;
}
int main()
{
    ll n,i,j,x,m,t,l,r;
    cin>>n;
    ll p[n+1],q[n+1];
    for(i=0;i<n;i++)
    {
        cin>>x;
        p[i]=x;
        q[i]=x;
    }
    sort(q,q+n);
    for(i=1;i<n;i++)
    {
        p[i]=p[i]+p[i-1];
        q[i]=q[i]+q[i-1];
    }
    cin>>m;
    while(m--)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            func(p,n,l,r);
        }
        else
        {
            func(q,n,l,r);
        }
    }
}
