#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans=1;
        while(n)
        {
            ll d=n%10;
            n=n/10;
            ll x=0;
            for(i=0;i<=9;i++)
            {
                for(j=0;j<=9;j++)
                {
                    for(k=0;k<=9;k++)
                    {
                        if(d==(i+j+k))
                        x++;
                    }
                }
            }
            ans=ans*x;
        }
        cout<<ans<<endl;
    }
}
