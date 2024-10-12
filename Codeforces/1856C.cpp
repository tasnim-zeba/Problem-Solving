#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,i,j,k,l,r,m,ans;
ll a[1005];
bool ok(ll x)
{
    for(i=0;i<n;i++)
    {
        ll rem=k;
        ll req=x;
        j=i;
        while(1)
        {
            if(j==n||rem<0)break;
            if(a[j]>=req)
            {
                return true;
            }
            rem=rem-(req-a[j]);
            j++;
            req--;
        }
    }
    return false;
}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        l=1,r=2e8+10;
        ans=a[n-1];
        while(l<=r)
        {
            m=(l+r)/2;
            if(ok(m))
            {
                ans=m;
                l=m+1;
            }
            else
            {
                r=m-1;
            }
        }
        cout<<ans<<endl;
    }
}
