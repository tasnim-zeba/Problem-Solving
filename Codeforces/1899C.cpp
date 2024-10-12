#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,j,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll mx=LLONG_MIN,s=0;
        for(i=1; i<=n; i++)
        {
            s=s+a[i];
            mx=max(mx,s);
            mx=max(mx,a[i]);
            if(i+1<=n)
            {
                ll x1,x2;
                if(a[i]<0)x1=a[i]*(-1);
                else x1=a[i];
                if(a[i+1]<0)x2=a[i+1]*(-1);
                else x2=a[i+1];
                if((x1%2)==(x2%2))
                {
                    s=0;
                }
            }
            if(s<0)s=0;
        }
        cout<<mx<<endl;
    }
}


