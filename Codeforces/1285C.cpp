#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll lcm(ll a,ll b)
{
    return (a*b)/__gcd(a,b);
}
int main()
{
    ll x,i,ans;
    cin>>x;
    for(i=1;i*i<=x;i++)
    {
        if(x%i==0&&lcm(i,(x/i))==x)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<x/ans<<endl;
}


