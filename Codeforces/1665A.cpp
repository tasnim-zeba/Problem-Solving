#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==4)
        {
            a=b=c=d=1;
        }
        else if(n==6)
        {
            a=1;
            b=3;
            c=1;
            d=1;
        }
        else if(n%2!=0)
        {
            c=1;
            d=1;
            n=n-2;
            a=(n/2);
            b=(n/2)+1;
        }
        else
        {
            c=2;
            d=2;
            n=n-2-2;
            if((n/2)%2!=0)
            {
                a=(n/2)-1;
                b=(n/2)+1;
            }
            else
            {
                c=1;
                d=1;
                n=n+2;
                a=(n/2)-2;
                b=(n/2)+2;
            }
        }
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
}
