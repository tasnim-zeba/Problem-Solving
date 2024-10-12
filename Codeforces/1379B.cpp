#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,l,r,m,i,j,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>m;
        for(i=l; i<=r; i++)
        {
            if((m%i)<=(r-l)&&(m/i))
            {
                a=i;
                c=l;
                b=l+(m%i);
                break;
            }
            ll x=i*(m/i+1)-m;
            if(x<=(r-l))
            {
                a=i;
                b=l;
                c=l+x;
                break;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}
