#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll M = 32768;
ll mod(ll x)
{
    return (x%M + M)%M;
}
ll func(ll p)
{
    int c=0;
    int c1=M-p;
    while(p)
    {
        p=(2*p)%32768;
        c++;
    }
    return min(c,c1);
}
int main()
{
    ll n,i,ans,x,y,j;
    cin>>n;
    ll a[M+1];
    for(i=0;i<32768;i++)
    {
        a[i]=func(i);
        ///cout<<a[i]<<" ";
    }
    ll pri[n+1];
    for(i=0;i<n;i++)
    {
        cin>>x;
        ans=a[x];
        ll k=x+15;
        for(j=x;j<=k&&j<M;j++)
        {
            y=(j-x)+a[j];
            ans=min(ans,y);
        }
        pri[i]=ans;
    }
    for(i=0;i<n;i++)
    {
        cout<<pri[i]<<" ";
    }
    cout<<endl;
    return 0;
}
