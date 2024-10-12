#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>n;
        ll ar[n+1];
        for(i=1;i<=n;i++)cin>>ar[i];
        ll ans=b;
        sort(ar+1,ar+n+1);
        for(i=1;i<=n;i++)
        {
            ans=ans+min(a-1,ar[i]);
        }
        cout<<ans<<endl;
    }
}
