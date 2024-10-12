#include<bits/stdc++.h>
using namespace std;
const int N=150006;
vector<int>g[N];
bool vis[N];
bool vis1[N];
int c;
void dfs(int vertex)
{
    c++;
    ///cout<<vertex<<endl;
    vis[vertex]=true;
    for(int child:g[vertex])
    {

        ///cout<<"parent "<<vertex<<",child "<<child<<endl;
        if(vis[child])continue;
        dfs(child);
    }
}
int p=1;
int dfs1(int vertex)
{
    ///cout<<vertex<<endl;
    vis1[vertex]=true;
    ///cout<<vertex<<" "<<c-1<<endl;
    if(g[vertex].size()!=c-1)
    {
        p=0;
    }
    for(int child:g[vertex])
    {
        ///cout<<"parent "<<vertex<<",child "<<child<<endl;
        if(vis1[child])continue;
        dfs1(child);
    }
    if(p==0)return 0;
    else return 1;
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=0; i<m; i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int f=1;
    for(i=1; i<=n; i++)
    {
        if(vis[i])continue;
        c=0;
        dfs(i);
        ///cout<<c<<endl;
        f=f*dfs1(i);
        p=1;
    }
    //cout<<f<<endl;
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
/*4 6
1 3
1 2
1 4
2 3
2 4
3 4*/
