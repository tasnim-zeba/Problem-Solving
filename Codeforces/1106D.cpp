#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int vis[N];
int main()
{
    int n,m,i,j,u,v;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(1);
    while(pq.size())
    {
        int x=pq.top();
        vis[x]=1;
        cout<<x<<" ";
        pq.pop();
        for(auto child:g[x])
        {
            if(vis[child])continue;
            pq.push(child);
            vis[child]=1;
        }
    }
}
