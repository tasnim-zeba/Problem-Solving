#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll func(ll l,ll h)
{
    if(l%h==0)
    {
        return l/h;
    }
    else
    {
        return (l/h)+1;
    }
}
int main()
{
    ll t,hc,dc,hm,dm,k,w,a,xc,xm,i;
    cin>>t;
    while(t--)
    {
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;
        int f=0;
        for(i=0; i<=k; i++)
        {
            xc=func((hc+i*a),(dm));
            xm=func(hm,dc+(k-i)*w);
            ///cout<<xc<<" "<<xm<<endl;
            if(xc>=xm)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
