
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
ll nCr(ll n, ll r)///ncr in linear time ---math video---cp video (video no 1)
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
void SIEVE(ll n)
{
    ///print the prime number from 1 to n
    ///prime[i]==1 hole i prime number
    ///prime[i]==0 hole i prime noy
    vector<ll>prime(n+1,1);
    prime[1]=0;
    for(int i=2; i<=n; i++)
    {
        if(!prime[i])continue;
        for(int j=i*i; j<=n; j=j+i)
        {
            prime[j]=0;
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
        }
    }
}
void cntNoOfDivisor(ll n)
{
    ///count the number of divisor for the single number from 1 to n
    vector<int>v(n+1);
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j=j+i)
        {
            v[j]++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<v[i]<<endl;
    }
}
void solve()
{
    ll n,x,y,ans;
    cin>>n;
    map<pair<ll,ll>,ll>co;
    map<ll,ll>mp1,mp2;
    while(n--)
    {
        cin>>x>>y;

        co[ {x,y} ]++;

        mp1[x]++;
        mp2[y]++;
    }
    ans=0;
    for(auto it=mp1.begin(); it!=mp1.end(); it++)
    {
        ll k=it->second;
        ans=ans+(k*(k-1))/2;
    }
    for(auto it=mp2.begin(); it!=mp2.end(); it++)
    {
        ll k=it->second;
        ans=ans+(k*(k-1))/2;
    }
    for(auto it=co.begin(); it!=co.end(); it++)
    {
        ll k=it->second;
        ans=ans-(k*(k-1))/2;
    }
    cout<<ans<<endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    cout<<fixed;
    cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    ll t=1;
    //cin>>t;
    for(int i=1; i<=t; i++)
    {
        //    cout<<"Case #"<<i<<": ";
        solve();
    }
    return 0;
}
