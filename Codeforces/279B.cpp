#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,q,c,l,r,x,ans,j;
    cin>>n>>t;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    x=0,j=0,ans=0;
    for(i=0;i<n;i++)
    {
        while(j<n&&((x+a[j])<=t))
        {
            x=x+a[j];
            j++;
        }
        ans=max(ans,j-i);
        x=x-a[i];
    }
    cout<<ans<<endl;
    return 0;
}
