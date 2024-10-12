#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll indx, ll k, vector<ll> &a, vector<vector<ll>> &dp)
{
    if(indx<0)return 0;
    if(dp[indx][k]!=-1)return dp[indx][k];
    ll ans =LLONG_MAX;
    ll mn = a[indx];
    for(int i=0; i<=k && (indx-i)>=0; i++)
    {
        mn = min(mn, a[indx-i]);
        if((indx-i)>=0)
        {
            ans = min(ans, mn*(i+1)+func(indx-i-1, k-i, a, dp));
        }
        /*else{
            ans = min(ans, mn*(indx+1)+func(-1, k-indx, a, dp));
        }*/
    }
    return dp[indx][k] = ans;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<vector<ll>>dp(n+1, vector<ll>(k+1, -1));
        ll ans = func(n-1, k, a, dp);
        cout<<ans<<endl;
    }
}
