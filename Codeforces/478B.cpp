#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(k==1)
    {
        ll ans=(n*(n-1))/2;
        cout<<ans<<" "<<ans<<endl;
    }
    else{
        ll mx=((n-k+1)*(n-k))/2;
        ll mn;
        ll a=n/k;
        ll b=n%k;
        ll c=(a*(a-1))/2;
        ll d=(a*(a+1))/2;
        mn=d*b+c*(k-b);
        cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}
