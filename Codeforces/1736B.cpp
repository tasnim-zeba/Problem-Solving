#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+2];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        b[1]=a[1];
        int f=1;
        for(i=1;i<=n;i++)
        {
            if((i+1)>n)
            {
                b[i+1]=a[i];
                break;
            }
            else
            {
                ll lcm=(a[i]*a[i+1])/(__gcd(a[i],a[i+1]));
                b[i+1]=lcm;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(__gcd(b[i],b[i+1])!=a[i])f=0;
            if(f==0)break;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
