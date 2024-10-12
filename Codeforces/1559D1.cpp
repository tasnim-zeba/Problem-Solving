#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g1(1005);
vector<vector<int>>g2(1005);
int vis1[1005],vis2[1005];
void dfs1(int x)
{
    vis1[x]=1;
    for(auto child:g1[x])
    {
        if(vis1[child]);
        else
        {
            dfs1(child);
        }
    }
}
void dfs2(int x)
{
    vis2[x]=1;
    for(auto child:g2[x])
    {
        if(vis2[child]);
        else
        {
            dfs2(child);
        }
    }
}
int main()
{
    int n,m1,m2,i,j,x,y;
    cin>>n>>m1>>m2;
    for(i=1;i<=m1;i++)
    {
        cin>>x>>y;
        g1[x].push_back(y);
        g1[y].push_back(x);
    }
    for(i=1;i<=m2;i++)
    {
        cin>>x>>y;
        g2[x].push_back(y);
        g2[y].push_back(x);
    }
    vector<pair<int,int>>p;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            vis1[j]=0;
            vis2[j]=0;
        }
        dfs1(i);
        dfs2(i);
        int f=0;
        for(j=1;j<=n;j++)
        {
            if(vis1[j]==0&&vis2[j]==0)
            {
                p.push_back({i,j});
                f=1;
                g1[i].push_back(j);
                g1[j].push_back(i);
                g2[i].push_back(j);
                g2[j].push_back(i);
                vis1[j]=1;
                break;
            }
        }
        ///if(f==0)break;
    }
    cout<<p.size()<<endl;
    for(i=0;i<p.size();i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
}
