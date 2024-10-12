#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        ll a[n+1],p[n+1],len[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        p[0]=0;
        p[1]=a[0];
        for(i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i];
        }
        for(i=0;i<n;i++)
        {
            ll mx=INT_MIN;
            for(j=0;j<n-i;j++)
            {

                mx=max(mx,p[j+i+1]-p[j]);
               /// cout<<mx<<endl;
            }
            len[i]=mx;
        }
        /*for(i=0;i<n;i++)
        {
            cout<<len[i]<<" ";
        }*/
        for( k=0;k<=n;k++)
        {
            ll mx=0;
            for(i=0;i<n;i++)
            {
                mx=max(mx,len[i]+min(i+1,k)*x);
            }
            cout<<mx<<" ";
        }
        cout<<endl;
    }
}
