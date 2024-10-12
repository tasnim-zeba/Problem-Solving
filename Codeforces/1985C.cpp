#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, n, i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        ll ans=0, sum=0, mx=0;
        for(i=1;i<=n;i++)
        {
            mx=max(mx, a[i]);
            sum = sum +a[i];
            if((sum-mx)==mx)ans++;
        }
        cout<<ans<<endl;
    }
}


