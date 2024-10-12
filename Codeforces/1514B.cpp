#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,ans;
    long long mod=1e9+7;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=1;
        while(k--)
        {
            ans=(ans*n)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}
