#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,c,d,i,x,y,g,p;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        x=y=-1;
        for(i=a+1;i<=c;i++)
        {
            g=__gcd(a*b,i);
            p=(a*b)/g;
            if(b/p!=d/p)
            {
                x=i;
                y=((b/p)+1)*p;
                break;
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}
