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
        ll d[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>d[i];
        }
        sort(d+1,d+n+1);
        ll ans=d[n];
        ll p[n+1];
        p[1]=0;
        for(i=2;i<=n;i++)
        {
            p[i]=(i-1)*(d[i]-d[i-1])+p[i-1];
            ans-=p[i];
        }
        cout<<ans<<endl;
    }
}
