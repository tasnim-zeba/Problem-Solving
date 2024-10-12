#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,l,i,j,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]=-1;
        }
        ans=-1;
        for(i=0; i<n; i++)
        {
            if(mp[a[i]]==-1)
            {
                mp[a[i]]=i;
            }
            else
            {
                ans=max(ans,min(i,n-i+mp[a[i]]));
            }
        }
        cout<<ans<<endl;
    }
}
