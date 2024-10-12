#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll x,ll a,ll b)
{
    ll g,lc,d,ans;
    g=__gcd(a,b);
    lc=(a*b)/g;
    d=x/lc;
    ans=x;
    if(d>0)
    {
        ans=ans-min(a,x-d*lc+1);
        ans=ans-(d-1)*a;
    }
    ans=ans-min(x,a-1);
    return ans;
}
int main()
{
    ll t,a,b,q,l,r,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>q;
        /*for(i=0;i<=1000;i++)
        {
            if(((i%a)%b)==((i%b)%a))
            {
                cout<<i<<" ";
            }
        }*/
        if(a<b)swap(a,b);
        while(q--)
        {
            cin>>l>>r;
            cout<<func(r,a,b)-func(l-1,a,b)<<" ";
        }
        cout<<endl;
    }
}
