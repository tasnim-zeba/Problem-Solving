#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
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
const int N=2e5+2;
int fact[N];

void precalc()
{
    fact[0]=1;
    for(int i=1; i<N; i++)
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
bool isSortedArray(ll a[],ll n)
{
    for(int i=0; i<n-1; i++)
    {
        if(a[i]>a[i+1])
        {
            return false;
        }
    }
    return true;
}
bool isSortedVector(vector<ll>v,ll n)
{
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
   ll n,i,j,m;
cin>>n;
        ll a[n+1];
        vector<ll>ev;
        vector<ll>od;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                ev.push_back(a[i]);
            }
            else
            {
                od.push_back(a[i]);
            }
        }
        if(isSortedArray(a,n))
        {
            cout<<"YES"<<endl;
        }
        else if(ev.size()==0||od.size()==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(isSortedVector(ev,ev.size())&&isSortedVector(od,od.size()))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    int t=1;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
