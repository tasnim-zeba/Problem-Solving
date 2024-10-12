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
    ll n,i;
    char c;
    string s;
    cin>>n>>c;
    cin>>s;
    ll f=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='c')
        {
            f=1;
        }
    }
    if(f==0)
    {
        cout<<0<<endl;
    }
    else
    {
        ll f=0,x=-1;
        for(i=0;i<n;i++)
        {
            if(s[i]==)
        }

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
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
