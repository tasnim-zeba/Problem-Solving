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
void solve()
{
int n,i,n1,x,k;
    cin>>n;
    n1=2*n;
    ll a[5003]={0};
    vector<int>v;
    for(i=1; i<=n1; i++)
    {
        cin>>x;
        if(a[x]==0)
        {
            a[x]=i;
        }
        else{
            v.push_back(i);
            v.push_back(a[x]);
            a[x]=0;
        }
    }
    x=1;
    if(v.size()!=n1)
    {
        x=0;
    }
    if(x==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=0;i<n1-1;i=i+2)
        {
            cout<<v[i]<<" "<<v[i+1]<<endl;
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t=1;
    ///cin>>t;
    for(int i=1; i<=t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}

