#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll M = 1e9+7;
ll mod(ll x)
{
    return (x%M + M)%M;
}

ll mul(ll a, ll b)
{
    return mod((mod(a)*mod(b)));
}

ll add(ll a, ll b)
{
    return mod(mod(a)+mod(b));
}
ll subtr(ll a, ll b)
{
    return mod(mod(a)-mod(b)+M);
}
ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=result*base;
            n--;
        }
        else
        {
            base=base*base;
            n=n/2;
        }
    }
    return result;
}
ll modpower(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=mul(result,base);
            n--;
        }
        else
        {
            base=mul(base,base);
            n=n/2;
        }
    }
    return result;
}
const ll N=1e3+2;
ll fact[N];
void precalc()
{
    fact[0]=1;
    for(ll i=1; i<N; i++)
    {
        fact[i]=mul(fact[i-1],i);
    }
}
ll inv(ll x)
{
    return modpower(x,M-2);
}
ll divide(ll a, ll b)
{
    return mul(a,inv(b));
}
ll nCr(ll n, ll r)
{
    return divide(fact[n],mul(fact[r],fact[n-r]));
}
void solve()
{
    ll n,k,i,j;
    cin>>n>>k;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    ll x=a[k-1];
    ll c=0,p=0;
    for(i=0;i<n;i++)
    {
        if(i<k&&a[i]==x)p++;
        if(a[i]==x)c++;
    }
    cout<<nCr(c,p)<<endl;
}
int main()
{
    int t=1;
    cin>>t;
    precalc();
    for(int i=1; i<=t; i++)
    {
        solve();
    }
    return 0;
}

