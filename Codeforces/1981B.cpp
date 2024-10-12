#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,n,m,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        l = max(0LL,n-m);
        r = n+m;
        j=1;
        ll ans=0;
        for(i=0; i<=60; i++)
        {
            if((r-l)>=j)
            {
                ans += j;
            }
            else if(l&(1LL<<i))
            {
                ans += j;
            }
            else if(r&(1LL<<i))
            {
                ans += j;
            }
            j=j*2;

        }
        cout<<ans<<endl;
    }
}

