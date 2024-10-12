#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll query(ll x, ll n, vector<ll> &pre)
{
    ll dv = x/n;
    ll ex = x%n;
    ll ans = dv*pre[n];
    if(ex)
    {
        if((dv+ex)<=n)
        {
            ans = ans + pre[dv+ex] - pre[dv];
        }
        else{
            ans = ans + pre[n] - pre[dv] + pre[dv+ex-n];
        }
    }
    return ans;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n+1), pre(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        pre[0] = 0;
        for(int i=1; i<=n; i++)
        {
            pre[i] = a[i] + pre[i-1];
        }
        while(q--)
        {
            ll l, r;
            cin>>l>>r;
            l--;
            ll ans = query(r, n, pre)-query(l, n, pre);
            cout<<ans<<endl;
        }
    }
}
