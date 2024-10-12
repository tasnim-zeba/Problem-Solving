#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,k, w;
        cin>>n>>m>>k;
        cin>>w;
        ll a[w+1];
        for(ll i=0; i<w; i++){
            cin>>a[i];
        }
        vector<ll>v;
        for(ll i=1; i<=n; i++){
                ll x=n-(k-1), y=m-(k-1);
            for(ll j=1; j<=m; j++){
                ll l= min(i,k);
                ll r=min(j,k);
                if(i>x)l=l-(i-x);
                if(j>y)r=r-(j-y);
                v.push_back(l*r);
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(), v.end());
        sort(a,a+w);
        reverse(a,a+w);
        ll ans = 0LL;
        for(ll i=0; i<w; i++){
            ans = ans + v[i]*a[i];
        }
        cout<<ans<<endl;
    }
}

