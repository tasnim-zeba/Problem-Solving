#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod(ll x,ll M)
{
    return (x%M + M)%M;
}
int main()
{
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<ll,ll>mp;
        c=1;
        for(i=0;i<n;i++)
        {
            ll k=a[i];
            ll p=i+a[i%n];
            p=mod(p,n);
            if(mp[p])
            {
                c=0;
                break;
            }
            mp[p]++;
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
/*6
1
14
2
1 -1
4
5 5 5 1
3
3 2 1
2
0 1
5
-239 -2 -100 -3 -11*/
