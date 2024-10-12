#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,q,i,l,r;
    cin>>n>>q;
    ll a[n+1],p[n+1]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        cin>>l>>r;
        p[l-1]++;
        if(r==n);
        else
        {
            p[r]--;
        }
    }
    for(i=1;i<n;i++)
    {
        p[i]+=p[i-1];
    }
    sort(a,a+n);
    sort(p,p+n);
    ll ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans+a[i]*p[i];
    }
    cout<<ans<<endl;
}
