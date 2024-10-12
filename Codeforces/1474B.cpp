#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
isprime(ll x)
{
    ll c,i;
    c=1;
    for(i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {
            c=0;
            break;
        }
    }
    return c;
}
int main()
{
    ll t,n,a1,a2,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=1+n;
        while(1)
        {
            if(isprime(p))
            {
                a1=p;
                break;
            }
            p++;
        }
        p=p+n;
        while(1)
        {
            if(isprime(p))
            {
                a2=p;
                break;
            }
            p++;
        }
        cout<<a1*a2<<endl;
    }
    return 0;
}
