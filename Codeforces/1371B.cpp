#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t,n,r,ans,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        if(n<=r)
        {
            mn=n;
            mn--;
            ans=(mn*(mn+1))/2;
            ans++;
            cout<<ans<<endl;
        }
        else
        {
            mn=r;
            ans=(mn*(mn+1))/2;
            cout<<ans<<endl;
        }

    }
}
