#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, a, b;
        cin>>n>>a>>b;
        ll c[n+1];
        for(int i=0; i<n; i++)
        {
            cin>>c[i];
        }
        ll g = __gcd(a, b);
        set<ll>st;
        for(int i=0; i<n; i++)
        {
            st.insert(c[i]%g);
        }
        if(st.size()==1){
            cout<<0<<endl;
        }
        else{
            vector<ll>v;
            for(auto ch: st){
                v.push_back(ch);
            }
            ll ans = v[v.size()-1]-v[0];
            for(int i=0; i<v.size()-1; i++)
            {
                ans = min(ans, v[i] + g - v[i+1]);
            }
            cout<<ans<<endl;
        }

    }
}

