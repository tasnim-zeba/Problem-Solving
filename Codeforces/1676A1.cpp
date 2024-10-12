#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,q,i,j,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        ll a[n+1],p[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
            cout<<a[i]<<" ";
        }
        ///sort(a,a+n,greater<ll>());
        vector<ll>v;
        p[0]=a[0];
        v.push_back(p[0]);
        for(i=1;i<n;i++)
        {
            p[i]=p[i-1]+a[i];
            v.push_back(p[i]);
            cout<<p[i]<<" ";
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        sort(v.begin(), v.end(), std::greater<ll>());
        vector<ll>::iterator low;
        /*while(q--)
        {
            ll x;
            cin>>x;
            if(x>s)
            {
                cout<<-1<<endl;
            }
            else
            {
                low = std::upper_bound(v.begin(), v.end(), x, std::greater<ll>());

             cout<<distance(v.begin(),low)<<endl;
            }
        }*/
    }
}
