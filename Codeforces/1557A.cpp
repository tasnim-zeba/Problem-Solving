#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t,i,s;
    double d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        s=0;
        for(i=0;i<n-1;i++)
        {
            s=s+a[i];
        }
        d=(double)s/(n-1);
        d=d+a[n-1];
        printf("%.9lf\n",d);
    }
    return 0;
}
