#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll solve(ll l,ll r,char x)
{
    if(l==r)return s[l]!=x;
    ll c1=0;
    for(int i=l;i<=(l+r)/2;i++)
    {
        if(s[i]!=x)
        {
            c1++;
        }
    }
    ll u=solve((l+r)/2+1,r,x+1);
    ll c2=0;
    for(int i=(l+r)/2+1;i<=r;i++)
    {
        if(s[i]!=x)
        {
            c2++;
        }
    }
    ll v=solve(l,(l+r)/2,x+1);
    return min(u+c1,v+c2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        ans=solve(0,n-1,'a');
        cout<<ans<<endl;
    }
    return 0;
}
