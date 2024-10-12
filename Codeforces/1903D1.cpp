#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,q,i,j,k;
    cin>>n>>q;
    ll a[n+1],b[n+1],c[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    while(q--)
    {
        cin>>k;
        ll x=k;
        for(i=1;i<=n;i++)
        {
            a[i]=b[i];
        }
        for(j=60;j>=0;j--)
        {
            ll p=0;
            for(i=1;i<=n;i++)
            {
                if(a[i]&(1LL<<j))c[i]=a[i];
                else
                {
                    ll b=0;
                    for(ll g=60;g>j;g--)
                    {
                        if(a[i]&(1LL<<g))
                        {
                            b+=(1LL<<g);
                        }
                    }
                    b+=(1LL<<j);
                    c[i]=b;
                    p=p+(b-a[i]);
                    if(p>x){
                        p=-1;
                        break;
                    }
                }
            }
            //cout<<p<<endl;
            if(p==-1||p==0);
            else {
                for(i=1;i<=n;i++)
                {
                    a[i]=c[i];
                }
                x=x-p;
            }
        }
        ll ans=a[1];
        //cout<<a[1]<<" ";
        for(i=2;i<=n;i++)
        {
            //cout<<a[i]<<" ";
            ans=ans&a[i];
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
}
