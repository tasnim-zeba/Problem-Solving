#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,k,x,s,rt,ans,p;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>k>>x;
        s=(k*(k+1))/2;
        p=(k*(k+1))/2 + (k*(k-1))/2;
        if(x>=p)
        {
            cout<<2*k-1<<endl;
        }
        else if(s>=x)
        {
            d=((sqrt(1+8.0*x))-1.0)/2.0;
            rt=d;
            if(rt==d)
            {
                ans=rt;
            }
            else{
                ans=rt+1;
            }
            cout<<ans<<endl;
        }
        else{
            x=x-s;
            s=(k*(k-1))/2;
            d=((sqrt(1+8.0*(s-x)))-1.0)/2.0;
            rt=d;
            if(rt==d)
            {
                ans=rt;
            }
            else{
                ans=rt;
            }
            cout<<2*k-1-ans<<endl;
        }

    }
}
