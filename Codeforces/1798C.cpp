#include<bits/stdc++.h>
using namespace std;
#define __lcm(a,b) (a/__gcd(a,b)*b)
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
        ll lcm=1,ans=1,g=0;
        for(i=0;i<n;i++)
        {
            g=__gcd(g,a[i]*b[i]);
            lcm=__lcm(lcm,b[i]);
            if(g%lcm)
            {
                ans++;
                lcm=b[i];
                g=a[i]*b[i];
            }
        }
        cout<<ans<<endl;
    }
}
