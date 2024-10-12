#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,m,x,j;
    ll M=1000000007;
    ll a[200005];
    a[0]=2;
    map<ll,ll>mp;
    mp[0]=1;
    mp[1]=1;
    for(j=1; j<=200001; j++)
    {
        x=0;
        for(i=8; i>=0; i--)
        {
            if(mp[i])
            {
                if(i==8)
                {
                    x=mp[i];
                    mp[i]=0;
                }
                else
                {
                    ll p=mp[i];
                    mp[i]=0;
                    mp[i+1]=(mp[i+1]+p)%M;
                }
            }
        }
        if(mp[9])
        {
            ll p=mp[9];
            mp[9]=0;
            mp[0]=(mp[0]+p)%M;
            mp[1]=(mp[1]+p)%M;
        }
        mp[9]=(mp[9]+x)%M;
        ll ans=0;
        for(i=0; i<=9; i++)
        {
            ans=(ans+mp[i])%M;
        }
        a[j]=ans;
    }
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll n1=n;
        ll res=0;
        while(n1)
        {
            ll r=n1%10;
            ///res=res+min(m,(10-r));
            if(m>=(10-r))
            {
                res=(res+a[m-10+r])%M;
            }
            else
            {
                res=(res+1)%M;
            }
            n1=n1/10;
        }
        cout<<res<<endl;
    }
}
