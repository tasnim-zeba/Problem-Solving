#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll M = 998244353;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
/*ll power(ll base,ll n)
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
}*/
/*ll power(ll base,ll n)
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
}*/
void solve()
{
    ll n,k,x;
    cin>>n>>k;
    ll a[n+1];
    x=n-k+1;
    vector<ll>v;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>=x)
        {
            v.push_back(i);
        }
    }
    ll a1,a2;
    a1=0;
    ll n1=n;
    while(k--)
    {
        a1=a1+n1;
        n1--;
    }
    a2=1;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
    {
        //a2=a2*(v[i+1]-v[i]);
        a2=mul(a2,(v[i+1]-v[i]));
    }
    cout<<a1<<" "<<a2<<endl;
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
            //cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
