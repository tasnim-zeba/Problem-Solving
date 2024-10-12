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
        ll a[n+1], pre[n+2], suf[n+2];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        pre[0]=a[0];
        for(i=1; i<n; i++)
        {
            pre[i] = pre[i-1]+ a[i];
        }
        suf[n-1]=a[n-1];
        for(i=n-2; i>=0; i--)
        {
            suf[i] = suf[i+1]+a[i];
        }
        ll ans = abs(pre[n-1]);
        for(i=0; i<n-1; i++)
        {
            ans = max(ans, abs(pre[i])+suf[i+1]);
        }
        cout<<ans<<endl;
    }
}

