#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll po(ll x,ll n)
{
    ll r=1;
    while(n--)
    {
        r=r*x;
    }
    return r;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed;
    cout<<setprecision(10);
    ll t,h,p,i,x,ans,s;
    cin>>t;
    while(t--)
    {
        cin>>h>>p;
        ans=0,s=0;
        for(i=0;i<h;i++)
        {
            x=po(2,i);
            if(x<=p)
            {
                ans++;
            }
            else
            {
                s=s+x;
            }
        }
        ans=ans+(s/p);
        if(s%p!=0)
        {
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
