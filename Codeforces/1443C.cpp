
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(const pair<ll,ll>&a,pair<ll,ll>&b)
{
    if(a.first==b.first)return (a.second<b.second);
    return (a.first>b.first);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,k,i,j,s,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector<pair<ll,ll>>v;
        for(i=0; i<n; i++)
        {
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end());
        s=0;
        ans=INT_MAX;
        for(i=n-1;i>=0;i--)
        {
            s=s+v[i].second;
            if(s>=v[i].first)
            {
               ans=max(v[i].first,s-v[i].second);
               break;
            }
        }
        if(ans==INT_MAX)
        {
            ans=0;
            for(i=0;i<n;i++)ans=ans+v[i].second;
        }
        cout<<ans<<endl;
    }
}
