#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,x,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        map<ll,ll>::iterator it,it1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll ans=0,extra=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if((it->second)==1)
            {
                extra++;
            }
            else if((it->second)>=2)
            {
                ans++;
            }
        }
        cout<<ans+(extra+1)/2<<endl;
    }
    return 0;
}
