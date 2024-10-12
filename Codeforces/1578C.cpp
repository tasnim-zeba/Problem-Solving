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
    ll h,p,s,x,f,y;
    cin>>h>>p;
    x=1,s=0,f=0;
    for(int i=1;i<=h;i++)
    {
        if(f==1)
        {
            s=s+(x/p);
            y=y*2;
            x=y+(x%p);
            ///x=2*(x-(x%p))+(x%p);
        }
        else
        {
            if((x/p)>=1)
            {
                f=1;
                s=s+(x/p);
                y=2*x;
                x=y+(x%p);
                ///x=2*(x-(x%p))+(x%p);
            }
            else
            {
            if(x%p==0)
            {
            s=s+(x/p);
            }
            else
            {
            s=s+(x/p)+1;
            }
            x=x*2;
            }
        }
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
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
    }
    return 0;
}
