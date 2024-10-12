#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,n,c,d,k,l,r,m,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>c>>d;
        ll a[n+1],p[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        if(a[0]*d<c)
        {
            cout<<"Impossible"<<endl;
            continue;
        }
        p[0]=a[0];
        for(i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        if(p[min(n-1,d-1)]>=c)
        {
            cout<<"Infinity"<<endl;
            continue;
        }
        l=0,r=d;
        ll ans=-1;
        while(l<=r)
        {
            m=(l+r)/2;
            if((m+1)<n)
            {
                ll x=d/(m+1);
                h=x*p[m];
                if(d%(m+1)&&h&&((d%(m+1))-1)<n)
                h=h+p[(d%(m+1))-1];
                if(h>=c)
                {
                    ans=max(ans,m);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            else
            {
                ll x=d/(m+1);
                h=x*p[n-1];
                if(d%(m+1)&&h&&((d%(m+1))-1)<n)
                h=h+p[(d%(m+1))-1];
                if(h>=c)
                {
                    ans=max(ans,m);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
           /* else if(m>n)
            {
                ll x=d/m;
                h=x*p[n-1];
                if(d%m)
                h=h+p[(d%m)-1];
                if(h>=c)
                {
                    ans=max(ans,m);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }*/
        }
        cout<<ans<<endl;
    }
}
