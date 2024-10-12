#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<ll,ll>>v;
        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        ll p[n+1], bl[n+1];;
        p[0]=v[0].first;
        for(i=1;i<n;i++)
        {
            p[i]=p[i-1]+v[i].first;
        }
        for(i=0;i<n-1;i++)
        {
            if(p[i]>=v[i+1].first)
            {
                bl[i]=1;
            }
            else
            {
                bl[i]=0;
            }
        }
        bl[n-1]=0;
        ll c=0;
        ll ans[n+1];
        for(i=n-1;i>=0;i--)
        {
            if(bl[i])c++;
            else c=0;
            ans[v[i].second]=i+c;
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

