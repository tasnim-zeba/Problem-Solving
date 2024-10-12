#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j;
    cin>>n;
    ll x;
    map<ll,ll>mp;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        mp[x-i]+=x;
    }
    ll ans=LLONG_MIN;
    for(auto it:mp)
    {
        ans=max(ans,it.second);
    }
    cout<<ans<<endl;
    return 0;
}
