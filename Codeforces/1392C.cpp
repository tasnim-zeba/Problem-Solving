#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
void solve()
{
    ll n,i,ans;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ans=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            ans=ans+(a[i]-a[i+1]);
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            while(t--){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}

