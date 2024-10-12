#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<map>
#include<iterator>
using namespace std;


///defines.....
#define ll              long long
#define lli             long long int
#define pb              push_back
#define mp              make_pair
#define RIP(i,n)        for(int i=0; i<n; i++)
#define F(i,a,b)        for(int i=a; i<b; i++)
#define RIP1(i,n)       for(int i=(n-1); i>=0; i--)
#define FOR(i,a,b)      for(int i=a;i<(b); i++)
#define FOR1(i,a,b)     for(int i=a; i>=(b); i--)
#define sc(a)           scanf("%lld",&a)
#define SC(a)           scanf("%d",&a)
#define cin(a)          cin >> a
#define cout(a)         cout << a
#define pi              acos(-1)
#define pr(a)           printf("%lld\n",a)
#define PR(a)           printf("%lld ",a)
#define s(a,b)          sort(a,b)
#define sz(x)           (int)(x).size()
#define nl              '\n'

void F_I_O()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
ll dp[502][502][25],n,m,k,i,j;
ll r[502][502];
ll c[502][502];
ll fun(ll i,ll j,ll f)
{

    if(f==0)
    {
    return 0;
    }
    if(dp[i][j][f]!=-1)
    {
    return dp[i][j][f];
    }
    ll ans=LLONG_MAX;
    if(i>0)
    {
    ans=min(ans,c[i-1][j]+fun(i-1,j,f-1));
    }
    if(i<n-1)
    {
    ans=min(ans,c[i][j]+fun(i+1,j,f-1));
    }
    if(j>0)
    {
    ans=min(ans,r[i][j-1]+fun(i,j-1,f-1));
    }
    if(j<m-1)
    {
    ans=min(ans,r[i][j]+fun(i,j+1,f-1));
    }
    return dp[i][j][f]=ans;
}
void solve()
{
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
            cin>>r[i][j];
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>c[i][j];
        }
    }
    if(k%2!=0)
    {
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<-1<<" ";
        }
        cout<<endl;
    }
    }
    else
    {
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ll res=fun(i,j,k/2);
            cout<<2*res<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    }

}
int main()
{
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }

}
