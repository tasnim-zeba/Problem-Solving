#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        ll m;
        cin>>n>>m;
        vector<pair<int,int>>v;
        int a[n+1], b[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
        }
        for(int i=1; i<=n; i++)
        {
            v.push_back({a[i], b[i]});
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        for(int i=0; i<n; i++)
        {
            ll d = min(m/v[i].first, (ll)v[i].second);
            ans= max(ans, d*v[i].first);
        }
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i].first+1==v[i+1].first)
            {
                ll curr = m;
                ll a = min(curr/v[i].first, (ll)v[i].second);
                curr=curr- a*v[i].first;
                ll b = min(curr/v[i+1].first, (ll)v[i+1].second);
                curr=curr- b*v[i+1].first;
                curr = curr - min({curr, a, v[i+1].second-b});
                ans = max(ans, m-curr);
            }

        }
       cout<<ans<<endl;
    }
}

