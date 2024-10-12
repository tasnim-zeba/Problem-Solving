#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>m;
        n=2*m;
        ll p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        ans=0;
        for(i=1;i<=n;i++)
        {
            ans=ans+abs(p[i]);
        }
        if(n==2)
        {
            ans=min(ans,abs(p[1]-p[2]));
        }
        else if(n==4)
        {
            ll c=0;
            for(i=1;i<=n;i++)
            {
                c=c+abs(p[i]-2);
            }
            ans=min(ans,c);
        }
        if(n%4==0)
        {
            ll c=0;
            for(i=1;i<=n;i++)
            {
                c=c+abs(p[i]+1);
            }
            for(i=1;i<=n;i++)
            {
                 c=c-abs(p[i]+1);
                 c=c+abs(p[i]-m);
                 ans=min(ans,c);
                 c=c-abs(p[i]-m);
                 c=c+abs(p[i]+1);
            }
        }
        cout<<ans<<endl;
    }
}
