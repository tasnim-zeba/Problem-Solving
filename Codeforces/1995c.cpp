#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> a(n+1);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans  = 0;
        for(int i=1; i<n; i++)
        {
            while(a[i-1]>a[i])
            {
                if(a[i]==1){
                    ans = -1;
                    break;
                }
                a[i]=a[i]*a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
