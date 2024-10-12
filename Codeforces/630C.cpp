#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,ans,x;
    cin>>n;
    x=2,ans=0;
    while(n--)
    {
        ans+=x;
        x=x*2;
    }
    cout<<ans<<endl;
    return 0;
}
