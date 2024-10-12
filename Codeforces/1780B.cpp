#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   /// fio
    ll t,n,k,i,j,r,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        p[1]=a[1];
        for(i=2;i<=n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        r=p[n];
        ll  mx=1;
        for(i=1;i<n;i++)
        {
            x=p[i];
            y=p[n]-p[i];
            mx=max(mx,__gcd(x,y));
        }
        cout<<mx<<endl;
    }
}
