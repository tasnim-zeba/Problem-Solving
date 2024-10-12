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
        ll a[n+1],pre[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        for(i=1;i<n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        ll ans=0,mx=0;
        map<ll,ll>mp;
        for(i=n-1;i>=0;i--)
        {
            mp[pre[i]]++;
            mx=max(mx,mp[pre[i]]);
            if(a[i]==0)
            {
                ans=ans+mx;
                mx=0;
                mp.clear();
            }
        }
        cout<<ans+mp[0]<<endl;
    }
}
