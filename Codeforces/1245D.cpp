#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2000+10;
ll parent[N];
ll Size[N];
void make(ll v)
{
    parent[v]=v;
    Size[v]=1;
}
ll Find(ll v)
{
    if(v==parent[v])return v;
    return parent[v]=Find(parent[v]);
}
void Union(ll a,ll b)
{
    a=Find(a);
    b=Find(b);
    if(a!=b)
    {
        if(Size[a]<Size[b])
        {
            swap(a,b);
        }
        parent[b]=a;
        Size[a]+=Size[b];
    }
}
int main()
{
    ll n,i,j;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(i=1; i<=n; i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll c[n+1],k[n+1];
    for(i=0; i<n; i++)
    {
        cin>>c[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>k[i];
    }
    for(i=1; i<=n+1; i++)
    {
        make(i);
    }
    vector<pair<ll,pair<ll,ll>>>p;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(i==j)continue;
            ll x=abs(v[i].first-v[j].first);
            ll y=abs(v[i].second-v[j].second);
            ll  wt=(k[i]+k[j])*(x+y);
            p.push_back({wt,{i+1,j+1}});
        }
    }
    for(i=0; i<n; i++)
    {
        p.push_back({c[i],{i+1,n+1}});
    }
    sort(p.begin(),p.end());
    ll tc=0;
    vector<ll>pw;
    vector<pair<ll,ll>>cn;
    for(auto child:p)
    {
        ll wt=child.first;
        ll u=child.second.first;
        ll v=child.second.second;
        if(Find(u)==Find(v))continue;
        Union(u,v);
        if(u==(n+1)||v==(n+1))
        {
        pw.push_back(min(u,v));
        }
        else
        {
            cn.push_back({u,v});
        }
        tc=tc+wt;
           ///cout<<u<<" "<<v<<endl;
    }
    cout<<tc<<endl;
    cout<<pw.size()<<endl;
    for(i=0;i<pw.size();i++)
    {
        cout<<pw[i]<<" ";
    }
    cout<<endl;
    cout<<cn.size()<<endl;
    for(i=0;i<cn.size();i++)
    {
        cout<<cn[i].first<<" "<<cn[i].second<<endl;
    }
   return 0;
}




