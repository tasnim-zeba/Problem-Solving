#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n,k,i,j,ans,mid,l,r;
    cin>>n>>k;
   ll a[n+1],b[n+1];
   ll g=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i]<a[i])
        {
            g=a[i]-b[i];
        }
    }
    if(g>k)
    {
        cout<<0<<endl;
        return 0;
    }
    ans=INT_MIN;
    l=0,r=1e9;
    r=r*2;
    while(l<=r)
    {
        mid=(l+r)/2;
        ll s=0;
        for(i=0;i<n;i++)
        {
           ll x=a[i]*mid;
            if(x>b[i])
            {
                if(s>k)
                {
                    break;
                }
                s=s+(x-b[i]);
            }
        }
        if(s<=k)
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
