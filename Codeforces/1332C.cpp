#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<char>h;
string s;
 ll t,n,k,i,j;
ll dfs(ll idx,vector<ll>g[],vector<ll>&vis)
{
    vis[idx]=1;
    h.push_back(s[idx]);
    for(ll child:g[idx])
    {
        if(vis[child])continue;
        dfs(child,g,vis);
    }
    map<char,ll>mp;
    ll mx=INT_MIN;
    for(i=0;i<h.size();i++)
    {
        mp[h[i]]++;
        mx=max(mx,mp[h[i]]);
    }
    return (h.size()-mx);
}
int main()
{
    cin>>t;
    while(t--)
    {
        h.clear();
        cin>>n>>k;
        cin>>s;
        vector<ll>g[n+1];
        vector<ll>vis(n+1,0);
        for(i=0;i<n;i++)
        {
            g[i%k].push_back(k-1-i);
            g[k-1-i].push_back(i%k);
        }
        /*for(i=0;i<n;i++)
        {
            g[n-1-i].push_back(i);
            g[i].push_back(n-1-i);
        }*/
        ll ans=0;
        for(i=0;i<n;i++)
        {
            if(vis[i])continue;
            h.clear();
            ans+=dfs(i,g,vis);
        }
        cout<<ans<<endl;
    }
}
