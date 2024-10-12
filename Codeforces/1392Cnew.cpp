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
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(i=0;i<n-1;i++)
        {
            ans=ans+max(0ll,a[i]-a[i+1]);
        }
        cout<<ans<<endl;
    }
}
