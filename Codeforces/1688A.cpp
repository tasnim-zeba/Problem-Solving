#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll z,o;
        for(i=0; i<=30; i++)
        {
            f=1<<i;
            if(n&f)///or if((n>>i)&1)
            {
                o=i;
                break;
            }
        }
         for(i=0; i<=30; i++)
        {
            f=1<<i;
            if(n&f);
            else
            {
                z=i;
                break;
            }
        }
        ll c=0;
        for(i=0; i<=30; i++)
        {
            f=1<<i;
            if(n&f)///or if((n>>i)&1)
            {
                c++;
            }
        }
        if(c>1)
        {
             ///cout<<pow(2LL,o)<<endl;
             ll nwn=(1<<o)|0LL;
             cout<<nwn<<endl;
        }
        else
        {
             ///cout<<pow(2LL,o)+pow(2LL,z)<<endl;
              ll nwn=(1<<o)|0LL;
              nwn=(1<<z)|nwn;
             cout<<nwn<<endl;
        }
    }
    return 0;
}
