#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  M=1e9+7;
ll mod(ll x)
{
    return ((x%M)+M)%M;
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
ll add(ll a,ll b)
{
    return mod(mod(a)+mod(b));
}
ll subtra(ll a,ll b)
{
    return mod(mod(a)-mod(b)+M);
}
ll modpower(ll b,ll n)
{
    ll r=1;
    while(n)
    {
        if(n%2)
        {
            r=mul(r,b);
            n--;
        }
        else
        {
            b=mul(b,b);
            n=n/2;
        }
    }
    return r;
}
ll inv(ll x)
{
    return modpower(x,M-2);
}
ll divide(ll a,ll b)
{
    return mul(a,inv(b));
}
int main()
{
    ll t,n,i,j,s,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n;
        x=mul(x,n+1);
        s=x;
        s=divide(s,2);
        x=mul(x,2*n+1);
        x=divide(x,3);
        ans=(x-s+M)%M;
        ans=mul(ans,2022);
        cout<<ans<<endl;
    }
}

