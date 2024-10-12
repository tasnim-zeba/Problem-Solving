#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        ll fcnt = b - a + 1;
        fcnt = min(n, fcnt);
        fcnt= max(0LL, fcnt);
        ll ans = 0;
        if(fcnt>0)
        {
            ans = ans + (b*(b+1))/2;
            ans = ans - ((b-fcnt)*(b-fcnt+1))/2;
        }
        ans = ans + (n-fcnt)*a;
        cout<<ans<<endl;
    }
}
