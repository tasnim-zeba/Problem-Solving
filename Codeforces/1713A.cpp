#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,w,x,y,z,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        w=x=y=z=0;
        while(n--)
        {
            cin>>a>>b;
            if(a==0)
            {
                if(b>=0)
                {
                    w=max(w,b);
                }
                else
                {
                    b=b*(-1);
                    x=max(x,b);
                }
            }
            else if(b==0)
            {
                if(a>=0)
                {
                    y=max(y,a);
                }
                else
                {
                    a=a*(-1);
                    z=max(z,a);
                }
            }
        }
        ans=2*w+2*x+2*y+2*z;
        cout<<ans<<endl;
    }
}
