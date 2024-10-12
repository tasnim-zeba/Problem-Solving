#include<bits/stdc++.h>
using namespace std;
vector<int> g[105][105];
int vis[105];
void dfs(int col,int x)
{
    vis[x]=1;
    for(auto child:g[col][x])
    {
        if(vis[child]);
        else
        {
            dfs(col,child);
        }
    }
}
int main()
{
    int n,m,i,j,a,b,c,u,v,ans,q;
    cin>>n>>m;

    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        g[c][a].push_back(b);
        g[c][b].push_back(a);
    }
    cin>>q;
    while(q--)
    {
        cin>>u>>v;
        ans=0;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                vis[j]=0;
            }
            dfs(i,u);
            if(vis[v])ans++;
        }
        cout<<ans<<endl;
    }
}
