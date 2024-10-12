#include<bits/stdc++.h>
using namespace std;
int const N=200002;
vector<int>g[N];
int vis[N];
int level[N];
vector<int>ind(N);
vector<int> bfs(int source)
{
    queue<int>q;
    vector<int>ordering;
    q.push(source);
    vis[source]=1;
    while(!q.empty())
    {
        int cur=q.front();
        ordering.push_back(cur);
        q.pop();
        for(int child: g[cur])
        {
            if(vis[child])continue;
            q.push(child);
            vis[child]=1;
            level[child]=level[cur]+1;
        }
    }
    return ordering;
}
bool cmp(int i, int j){
    return ind[i]<ind[j];
}
int main()
{
    int n,m,i,j,x,y;
    cin>>n;
    m = n - 1;
    while(m--)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        ind[v[i]] = i;
    }
    for(i=1;i<=n;i++){
        sort(g[i].begin(), g[i].end(),cmp);
    }
    if(bfs(1)==v)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    ///time complexity O(n+m)
}
