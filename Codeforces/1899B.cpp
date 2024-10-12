#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,j,i,root;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],p[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        p[0]=0;
        p[1]=a[1];
        for(i=2;i<=n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        root=sqrt(n);
        vector<ll>v;
        for(i=1;i<=root;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                if(i!=1)
                {
                    v.push_back(n/i);
                }
            }
        }
        ll pr=0,b=2;
        ll ans=INT_MIN;
        for(i=0;i<v.size();i++)
        {
            //cout<<v[i]<<endl;
            ll mx=LLONG_MIN,mn=LLONG_MAX;
            ll m=v[i],l=v[i];
            while(m<=n)
            {
                //cout<<m<<" "<<pr<<endl;
                mn=min(mn,p[m]-p[pr]);
                mx=max(mx,p[m]-p[pr]);
                pr=m;
                m=l*b;
                b++;
            }
            ans=max(ans,mx-mn);
            pr=0;
            b=2;
        }
        cout<<ans<<endl;
    }
}

