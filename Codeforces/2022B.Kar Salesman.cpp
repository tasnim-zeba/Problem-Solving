#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n+1];
        ll s=0, mx = 0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            s=s+a[i];
            mx = max(mx, a[i]);
        }
        ll low = mx, high = 5e14, mid;
        while(low<=high)
        {
            mid = low+(high-low)/2;
            ll capacity = mid*x;
            if(capacity>=s)
            {
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        cout<<low<<endl;
    }
}
