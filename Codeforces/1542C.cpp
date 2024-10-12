#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll lc,ll i)
{
    ll g=__gcd(lc,i);
    g=(lc*i)/g;
    return g;
}
int main()
{
    ll t,n,i,j,M=1e9+7;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll lc=1,c=0,ans=0;
        for(i=2; ;i++)
        {
            ll x=(n/lc)-(n/lcm(lc,i));
            lc=lcm(lc,i);
            ans=(ans+(x*i)%M)%M;
            c=c+x;
            if(c==n)break;
        }
        cout<<ans<<endl;
    }
}
