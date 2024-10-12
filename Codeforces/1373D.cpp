#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>e,o;
        ll ans=0;
        for(i=0;i<n;i=i+2)
        {
            ans=ans+a[i];
            if((i+1)<n)
            {
                e.push_back(a[i+1]-a[i]);
            }
        }
        for(i=1;i<n;i=i+2)
        {
            if((i+1)<n)
            {
                o.push_back(a[i]-a[i+1]);
            }
        }
        ll mx,k;
        mx=0;
        k=0;
        for(i=0;i<e.size();i++)
        {
            if((k+e[i])<0)
            {
                k=0;
            }
            else
            {
                k=k+e[i];
                mx=max(mx,k);
            }
        }
        k=0;
        for(i=0;i<o.size();i++)
        {
            if((k+o[i])<0)
            {
                k=0;
            }
            else
            {
                k=k+o[i];
                mx=max(mx,k);
            }
        }
        ans+=mx;
        cout<<ans<<endl;
    }
}
