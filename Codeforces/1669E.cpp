#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,k,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1];
        map<ll,ll>mp;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(j=0; j<=30; j++)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]&(1<<j))
                {
                    mp[j]++;
                }
            }
        }
        ans=0;
        for(j=30; j>=0; j--)
        {

            ll d=n-mp[j];
            if(d<=k)
            {
                ans=ans+pow(2,j);
                k=k-d;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
