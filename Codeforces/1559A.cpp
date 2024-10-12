#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=a[0];
        for(i=1;i<n;i++)
        {
            ans=ans&a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
