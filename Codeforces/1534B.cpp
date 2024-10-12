#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[400005];
int main()
{
    ll t,n,i,j,c,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=0;
        if(a[0]>a[1])
        {
            c=c+a[0]-a[1];
            a[0]=a[1];
        }
        if(a[n-1]>a[n-2])
        {
            c=c+a[n-1]-a[n-2];
            a[n-1]=a[n-2];
        }
        for(i=1;i<n-1;i++)
        {
            if((a[i]>a[i-1])&&(a[i]>a[i+1]))
            {
                mn=max(a[i-1],a[i+1]);
                c=c+(a[i]-mn);
                a[i]=mn;
            }
        }
        c=c+a[0]+a[n-1];
        for(i=0;i<n-1;i++)
        {
            c=c+abs(a[i+1]-a[i]);
        }
        cout<<c<<endl;
    }
    return 0;
}
