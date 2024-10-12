#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>a(n);
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.rbegin(),a.rend());
        ans=0;
        for(i=0;i<k;i++)
        {
            ans+=a[i+k]/a[i];
        }
        for(i=2*k;i<n;i++)
        {
            ans=ans+a[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
