#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<pair<ll,ll>>  func(ll a[],ll n,ll m)
{
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++)
    {
        ll c=1;
        ll x=a[i];
        while(x%m==0)
        {
            c=c*m;
            x=x/m;
        }
        if(!v.empty())
        {
            if(v.back().first==x)
            {
                v.back().second+=c;
            }
            else
            {
                v.push_back({x,c});
            }
        }
        else
        {
            v.push_back({x,c});
        }
    }
    return v;
}
int main()
{
    ll t,n,m,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        ll b[k+1];
        for(i=0;i<k;i++)
        {
            cin>>b[i];
        }
        vector<pair<ll,ll>>v1=func(a,n,m);
        vector<pair<ll,ll>>v2=func(b,k,m);
       /* for(i=0;i<v1.size();i++)
        {
           cout<<v1[i].first<<" "<<v1[i].second<<endl;
        }
        for(i=0;i<v2.size();i++)
        {
            cout<<v2[i].first<<" "<<v2[i].second<<endl;
        }*/
        if(v1==v2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
