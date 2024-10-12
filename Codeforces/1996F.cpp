#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n+1], b[n+1];
        for(int i=1; i<=n; i++)cin>>a[i];
        for(int i=1; i<=n; i++)cin>>b[i];

        int low = 1, high = 1e9, mid, x = 1e9;
        while(low<=high){
            int mid = low + (high - low)/2;
            ll cnt = 0;
            for(int i=1; i<=n; i++){
                if(mid>a[i])continue;
                cnt = cnt + (a[i] - mid)/b[i] + 1;
            }
            if(cnt>=k){
                x = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        if(low==1)x=1;
        ll ans = 0, cnt = 0;
        for(int i=1; i<=n; i++){
                if(x>a[i])continue;
                int c = (a[i] - x)/b[i] + 1;
                ans = ans + (ll)c*a[i] - (((ll)(c-1)*c)/2)*b[i];
                cnt =cnt + c;
        }
        if(cnt>k)
        {
            ans = ans - (cnt-k)*x;
        }
        cout<<ans<<endl;
    }
}
