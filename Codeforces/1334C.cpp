#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, i, j, x, y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<ll,ll>>v(2*n+2);
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            v[i].first=x;
            v[i].second=y;
            v[n+i]=v[i];
        }
        ll a[2*n+2];
        a[0]=v[0].first;
        for(i=1;i<2*n;i++)
        {
            a[i]=max(0LL,v[i].first-v[i-1].second);
        }
        ll s=0;
        for(i=1;i<n;i++)
        {
            s=s+a[i];
        }
        ll ans=LLONG_MAX;
        for(i=0;i<n;i++)
        {
            ans=min(ans,s+v[i].first);
            s-=a[i+1];
            s+=a[i+n];
        }
        cout<<ans<<endl;
    }
}
