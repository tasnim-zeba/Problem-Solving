#include<bits/stdc++.h>
using namespace std;
vector<int>g[200005];
int vis[200005];
int c=1;
void dfs(int vertex)
{
    vis[vertex]=1;
    if(g[vertex].size()!=2)
    {
        c=0;
    }
    for(int child: g[vertex])
    {
    if(vis[child])continue;
       dfs(child);
    }
}
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    while(m--)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i])continue;
        c=1;
        dfs(i);
        if(c)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}
