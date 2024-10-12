#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+1], p[n+2];
         ll ans = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            ans=ans+a[i];
        }
        vector<ll> v(n+1,0);
        ll mx = 0;
        for(int i=1; i<=n; i++)
        {
            v[a[i]]++;
            if(v[a[i]]>1 && a[i]>mx)
            {
                p[i]=a[i];
                mx=a[i];
            }
            else{
                p[i]=mx;
            }
        }
        v[0]=0;
        for(int i=1; i<=n; i++)
        {
            ans=ans+p[i];
            a[i]=p[i];
            p[i]=0;
            v[i]=0;
        }
        mx = 0;
        for(int i=1; i<=n; i++)
        {
            v[a[i]]++;
            if(v[a[i]]>1 && a[i]>mx)
            {
                p[i]=a[i];
                mx=a[i];
            }
            else{
                p[i]=mx;
            }
        }
        int fre=1;
        for(int i=n; i>=1; i--)
        {
           // cout<<p[i]<<" ";
           ans=ans+p[i]*fre;
            fre++;
        }
        cout<<ans<<endl;
    }
}

