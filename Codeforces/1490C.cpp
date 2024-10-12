#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=result*base;
            n--;
        }
        else
        {
            base=base*base;
            n=n/2;
        }
    }
    return result;
}
map<ll,ll>mp;
map<ll,ll>:: iterator it;
void solve()
{
    ll x,f,i;
    cin>>x;
    f=0;
    for(i=1;i<=10000;i++)
    {
        ll y=i*i*i;
        if((x-y)>0)
        {
            if(mp.find(x-y)==mp.end());
            else
            {
                f=1;
                break;
            }
        }
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            ll t=1;
            mp[0]=0;
    for(ll i=1;i<=10000;i++)
    {
        mp[i*i*i]++;
    }
            cin>>t;
            for(ll i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
