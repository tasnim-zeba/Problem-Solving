#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,r,avg,x,y,i;
    cin>>n>>r>>avg;
    vector<pair<ll,ll>>v;
    ll s=0,req=0;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({y,x});
        s+=x;
    }
    req=avg*n-s;
    if(req<=0)
    {
        cout<<0<<endl;
    }
    else
    {
        sort(v.begin(),v.end());
        ll ans=0;
        for(i=0;i<n;i++)
        {
            if(req==0)break;
            if(v[i].second<r)
            {
                ll o=r-v[i].second;
                ll h=min(o,req);
                ans+=(h*v[i].first);
                req-=h;
                if(req==0)break;
            }
        }
        cout<<ans<<endl;
    }
}
