#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,ans;
    cin>>n;
    ll a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<ll>v;
    vector<ll>:: iterator it;
    for(i=0;i<n;i++)
    {
        v.push_back(a[i]-b[i]);
    }
    sort(v.begin(),v.end());
    ans=0;
    for(i=0;i<n;i++)
    {
        if(v[i]<=0)
        {
            continue;
        }
        else
        {
            ll x=(v[i])*(-1);
            it=upper_bound(v.begin(),v.end(),x);
            ans+=(i-distance(v.begin(),it));
        }
    }
    cout<<ans<<endl;
    return 0;
}
