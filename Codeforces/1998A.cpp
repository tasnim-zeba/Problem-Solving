#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,k;
        cin>>x>>y>>k;
        vector<pair<ll,ll>>v;
        for(ll i=1; i<=k-1; i++)
        {
            v.push_back({i,i});
        }
        ll p = ((k-1)*k)/2LL;
        v.push_back({(x*k)-p, (y*k)-p});
        int f = 0;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i].first!=v[k-1].first)
            {
                swap(v[i].first,v[k-1].first);
                f=1;
                break;
            }
        }
        if(f==0){
            if(v[0]==v[1])
            {
                v[0].first+=v[1].first;
                v[0].second+=v[1].second;
                v[1].first=v[1].second = 0;
            }
        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}
