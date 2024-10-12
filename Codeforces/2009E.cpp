#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        ll low = k, high = k+n-1, ans = LLONG_MAX, mid;
        auto Sum = [&](ll l, ll r) -> ll{
            return (r * (r+1))/2 - ((l-1)*l)/2;
        };
        while(low<=high)
        {
            ll mid = low + (high-low)/2;
            ll fhalf = Sum(k, mid);
            ll shalf = Sum(mid+1, k+n-1);
            ans = min(ans, abs(fhalf-shalf));
            if(shalf>=fhalf)
            {
                low = mid + 1;

            }
            else{
                high = mid-1;

            }
        }
        cout<<ans<<endl;
    }
}


