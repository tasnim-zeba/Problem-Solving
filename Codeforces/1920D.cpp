#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,qs,k,b,x,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>qs;
        vector<pair<ll,ll>>v(n);
        vector<ll>q(qs),siz;
        for( auto &i: v)
        {
            cin>>i.first>>i.second;
        }
        for( auto &i: q)cin>>i;
        ll sz=0;
        for(auto &[i,j] : v)
        {
            siz.push_back(sz+1);
            if(i==1)sz++;
            else if(sz+1<=1e18/j)
            {
                sz+=sz*j;
            }
            else break;
        }
        function<ll(ll)>query = [&](ll x){
            auto idx = upper_bound(siz.begin(), siz.end(), x) - siz.begin() - 1;
            if(v[idx].first == 1) return v[idx].second;
            return query((x % (siz[idx] - 1) == 0 ? siz[idx] - 1 : x % (siz[idx] - 1)));
        };
        for(auto &i: q)cout<<query(i)<<" ";
        cout<<endl;
    }
}
