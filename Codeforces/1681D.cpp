#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l;
ll func(ll x,ll n)
{
    if(n==l)return 1;
    ll x1,r,x2;
    x1=x;
    x2=x;
    vector<ll>v;
    while(x1)
    {
        r=x1%10;
        v.push_back(r);
        x1=x1/10;
    }
    ll mn=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        mn=min(mn,func(x2*v[i],log10(x2*v[i])));
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
   ll x,n;
   cin>>n>>x;
   l=n;
   ll ans=func(x,n);
}
