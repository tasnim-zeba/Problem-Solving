#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        sort(a,a+n);
        ll ans=0;
        for(i=0; i<n; i++)
        {
            ll x=a[i];
            if(mp[x]>=1)
            {
                ans++;
                while(mp[x]>=1)
                {
                    mp[x]--;
                    x++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
