#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1e9+7;
int main()
{
    ll t,n,lcm,res,ans,i,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        lcm=1;
        for(i=2;;i++)
        {
            if(lcm>n)
            {
                break;
            }
            l=n/lcm;
            lcm=(lcm*i)/__gcd(lcm,i);
            r=n/lcm;
            res=(i*(l-r))%mod;
            ans=(ans+res)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
