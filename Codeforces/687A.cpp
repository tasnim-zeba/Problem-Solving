#include<bits/stdc++.h>
using namespace std;
int const N=1e5+5;
vector<int>g[N];
int vis[N];
int bfs(int node,int b)
{
    queue<int>q;
    q.push(node);
    vis[node]=b;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        for(auto child:g[x])
        {
            if(vis[child]==0)
            {
                if(vis[x]==1)
                {
                    vis[child]=2;
                }
                else
                {
                    vis[child]=1;
                }
                q.push(child);
            }
            else if(vis[child]==vis[x])
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n,m,i,j,x,y;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int c=1;
    int h=0;
    for(i=1; i<=n; i++)
    {
        if(vis[i]);
        else
        {
            int f;
            f=bfs(i,c);
            if(f==1)
            {
                h=1;
            }
            else
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    if(h)
    {
        vector<int>v1,v2;
        for(i=1; i<=n; i++)
        {
            if(vis[i]==c)
            {
                v1.push_back(i);
            }
            else if(vis[i]==c+1)
            {
                v2.push_back(i);
            }
        }
        if(v1.size()==0||v2.size()==0)
        {
            cout<<-1<<endl;
            return 0;
        }
        cout<<v1.size()<<endl;
        for(i=0; i<v1.size(); i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        cout<<v2.size()<<endl;
        for(i=0; i<v2.size(); i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    return 0;
}
