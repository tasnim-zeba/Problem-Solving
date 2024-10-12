#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,ans;
    cin>>n;
    if(n%2==0)
    {
        ans=pow(2,(n/2));
    }
    else
    {
        ans=0;
    }
    cout<<ans<<endl;
}
