#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll n,ll x)
{
    string s1=to_string(n);
    string bi=to_string(x);
    ll c=0;
    ll l=0,r=0;
    while(l<s1.size()||r<bi.size())
    {
        if(l==s1.size())
        {
            c=c+(bi.size()-r);
            break;
        }
        if(r==bi.size())
        {
            c=c+(s1.size()-l);
            break;
        }
        if(s1[l]==bi[r])
        {
            l++;
            r++;
        }
        else{
            c++;
            l++;
        }
    }
    return c;
}
int main()
{
    ll t,n,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[65],c;
        ll p=1;
        i=0;
        c=0;
        while(p<=1e18)
        {
            a[i]=p;
            c++;
            p=p*2;
            i++;

        }
        ans=INT_MAX;
        for(i=0;i<c;i++)
        {
            ans=min(ans,func(n,a[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}
