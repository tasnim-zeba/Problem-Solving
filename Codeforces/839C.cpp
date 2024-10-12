#include<bits/stdc++.h>
using namespace std;
int const N=100005;
vector<int>g[N];
int vis[N];
int level[N];
void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        ///cout<<cur<<" ";
        for(int child: g[cur])
        {
            if(vis[child])continue;
            q.push(child);
            vis[child]=1;
            level[child]=level[cur]+1;
        }
    }
    ///cout<<endl;
}
int main()
{
    int n,m,i,j,x,y;
    cin>>n;
    m=n-1;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    if(m==1)cout<<1.000000000<<endl;
    bfs(1);
    long long c=0,s=0;
    for(i=2;i<=n;i++)
    {
        ///cout<<level[i]<<" "<<endl;
        if(g[i].size()==1)
        {
            c++;
            s+=(level[i]);
        }
    }
    cout<<fixed<<setprecision(9)<<s/(double)c<<endl;
    ///time complexity O(n+m)
}

