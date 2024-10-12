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
ll power(ll base,ll n)
{
    ll result=1;
    while(n)
    {
        if(n%2==1)
        {
            result=mul(result,base);
            n--;
        }
        else
        {
            base=mul(base,base);
            n=n/2;
        }
    }
    return result;
}
void solve()
{
    ll n,k,i,r,s;
    cin>>n>>k;
    s=0;
    i=0;
    while(k)
    {
        r=k%2;
        ll x= (r*(power(n,i)));
        s=mod(s+x);
        i++;
        k=k/2;
    }
    cout<<s<<endl;
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
            cin>>t;
            for(ll i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}

