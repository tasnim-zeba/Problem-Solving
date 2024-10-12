#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 2e5+5;
vector<int>g[N];
int vis[N];
int a[N];
void dfs(int u)
{
    int x = INT_MAX;
    if(g[u].size()==0)return;
    for(auto v: g[u])
    {
        dfs(v);
        x = min(x, a[v]);
    }
    if(u==1)
    {
        return;
    }
    else
    {
        if(x<=a[u]){
            a[u] = x;
        }
        else if(x>a[u])
        {
            a[u] = (a[u]+x)/2;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1; i<=n; i++)
        {
            g[i].clear();
            cin>>a[i];
        }
        for(int i=2; i<=n; i++)
        {
            int x;
            cin>>x;
            g[x].push_back(i);
        }
       dfs(1);
       int x = INT_MAX;
       for(int i=0; i<g[1].size(); i++)
       {
           x = min(x, a[g[1][i]]);
       }
       cout<<a[1]+x<<endl;
    }
}

