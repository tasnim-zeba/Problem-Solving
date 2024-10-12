#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll s=0, mx=0;
        for(int i=1; i<=n; i++)
        {
            ll x;
            cin>>x;
            s=s+x;
            mx = max(mx, x);
        }
        ll ans=0;
        for(int sz = n; sz>=1; sz--)
        {
            ll x = (s+k)/sz;
            x=x*sz;
            if(x>=s && (x/sz)>=mx)
            {
                ans=sz;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
