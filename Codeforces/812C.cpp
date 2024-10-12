#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll a[],ll s,ll m,ll n)
{
    vector<ll>v;
    for(ll i=1;i<=n;i++)
    {
        ll x=a[i]+i*m;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        sum=sum+v[i];
    }
    if(sum<=s)
    {
        return sum;
    }
    else{
        return -1;
    }
}
int main()
{
    ll n,s,i,j,l,r,m,ans1,ans2;
    cin>>n>>s;
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    l=0,r=n;
    ans1=0;
    ans2=0;
    while(l<=r)
    {
        m=(l+r)/2;
        if(func(a,s,m,n)!=-1)
        {
            if(m>ans1)
            {
                ans1=m;
                ans2=func(a,s,m,n);
            }
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;
}
