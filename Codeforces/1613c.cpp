#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll d,ll x)
{
    if(d%x==0)
    {
        return (d/x);
    }
    else
    {
        return (d/x)+1;
    }
}
int main()
{
    ll t,n,h,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>h;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        k=func(h,n);
        vector<ll>v;
        for(i=1; i<n; i++)
        {
            v.push_back(a[i]-a[i-1]);
        }
        sort(v.begin(),v.end());
        ll n1=n;
        for(i=0; i<v.size(); i++)
        {
            n1--;
            if(v[i]<k)
            {
                h=h-v[i];
                k=func(h,n1);
            }
            else
            {
                break;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
