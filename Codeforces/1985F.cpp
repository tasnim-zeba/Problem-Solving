#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, i,j,h;
    cin>>t;
    while(t--)
    {
        cin>>h>>n;
        ll a[n+1], c[n+1];
        ll k=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            k+=a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>c[i];
        }
        if(k>=h){
            cout<<1<<endl;
            continue;
        }
        ll l=0, r= 1e18;
        while(l<=r)
        {
            ll m=l+(r-l)/2;
            ll z=0;
            for(i=0; i<n; i++)
            {
                z = z+ a[i]*(((m-1)/c[i])+1);
            }
            if(z>=h)r=m-1;
            else l = m+1;
            //cout<<r<<endl;
        }
        cout<<r+1<<endl;
    }
}




