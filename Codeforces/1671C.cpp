#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,x,ad,j,ans;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n>>x;
        ll a[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1; i<n; i++)
        {
            a[i]=a[i-1]+a[i];
        }
        if(a[0]>x)
        {
            cout<<0<<endl;
        }
        else
        {
            j=n-1;
            for(i=0; i<n; i++)
            {
                if(a[i]>x)
                {
                    j=i-1;
                    break;
                }
            }
            ll ans=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>x)break;
                ll k=1;
                k=k+((x-a[i])/(i+1));
                ans=ans+k*(i+1)-i*k;
            }
            cout<<ans<<endl;
        }

    }
    return 0;
}
