#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const M=998244353;
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
int main()
{
    ll t,n,i,j,z,o,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll kh[n+1];
        string s;
        cin>>s;
        o=z=0;
        c=0;
        for(i=0;i<n;i++)
        {
            c++;
            if(i==0)
            {
                kh[0]=0;
                if(s[i]=='0')z++;
                else o++;
            }
            else
            {
                kh[i]=kh[i-1]+1;
                if(s[i]=='0')
                {
                    z++;
                    if(z<c)
                    {
                        kh[i]-=(c-z);
                        z=c;
                    }
                }
                else
                {
                    o++;
                    if(o<c)
                    {
                        kh[i]-=(c-o);
                        o=c;
                    }
                }
            }
        }
        ll ans=0;
        for(i=0;i<n;i++)
        {
            ans=add(ans,modpower(2,kh[i]));
        }
        cout<<ans<<endl;
    }
}

