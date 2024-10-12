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
    ll n,x,i;
    cin>>n>>x;
    ll a[n+1],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
        sort(b,b+n);
        int f=1;
        for(i=n-x;i<=x-1;i++)
            {
                if(a[i]!=b[i])
                {
                    f=0;
                    break;
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
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
