#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 1e9+7;
# define M_PI  3.14159265358979323846
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
ll inv(ll x)
{
    return modpower(x,M-2);
}

ll divide(ll a, ll b)
{
    return mul(a,inv(b));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2], p[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        p[n]=a[n];
        for(int i=n-1; i>0; i--){
            p[i]= p[i+1]+a[i];
        }
        ll x = 0;
        for(int i=1; i<n; i++){
            x = add(x, mul(a[i],p[i+1]));
        }
        ll y = divide(mul(n-1, n), 2LL);
        ll ans = divide(x, y);
        cout<<ans<<endl;
    }
}


