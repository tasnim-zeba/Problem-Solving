#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const N=1e5+5;
ll const inf=LLONG_MAX;
vector<pair<ll,ll>>g[N];
ll n,m,i;
void dijkstra(ll src)
{
    vector<ll>dis(N,inf);
    vector<ll>vis(N,0);
    set<pair<ll,ll>>st;
    vector<ll>hl(N,inf);
    st.insert({0,src});
    dis[src]=0;
    while(st.size())
    {
        auto node = *st.begin();
        ll v=node.second;
        st.erase(st.begin());
        if(vis[v])continue;
        vis[v]=1;
        for(auto child: g[v])
        {
            ll child_v=child.first;
            ll wt=child.second;
            if(dis[v]+wt<dis[child_v])
            {
                dis[child_v]=dis[v]+wt;
                hl[child_v]=v;
                st.insert({dis[child_v],child_v});
            }
        }
    }
    ll mx1,mx2;
    mx1=mx2=INT_MIN;
    if(dis[n]==inf)
    {
        cout<<-1<<endl;
    }
    else
    {
        ll b;
        b=n;
        vector<ll>ans;
        while(b!=1)
        {
            ans.push_back(b);
            b=hl[b];
        }
        ans.push_back(1);
        for(i=ans.size()-1; i>=0; i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    cin>>n>>m;
    while(m--)
    {
        ll x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        g[y].push_back({x,wt});
    }
    dijkstra(1);
}


