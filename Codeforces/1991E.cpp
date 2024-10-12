#include<bits/stdc++.h>
using namespace std;
const int N = 2e4+5;
vector<int>g[N];
int vis[N];
bool dfs(int u)
{
    bool f = true;
    for(auto v: g[u])
    {
        if(vis[u]==vis[v])return false;
        if(vis[v])continue;
        if(vis[u]==1)vis[v] = 2;
        else if(vis[u]==2)vis[v]=1;
        f = f & dfs(v);
    }
    return f;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            g[i].clear();
            vis[i] = 0;
        }
        for(int i=1; i<=m; i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        vis[1] = 1;
        if(dfs(1))
        {
            cout<<"Bob"<<endl;
            vector<int>one, two;//each will store the relevant colored index
            for(int i=1; i<=n; i++)
            {
                if(vis[i]==1)one.push_back(i);
                else two.push_back(i);
            }
            for(int i=1; i<=n; i++)
            {
                int c1, c2;
                cin>>c1>>c2;
                if(one.size() && two.size())
                {
                    if(c1==1 || c2==1)
                    {
                        cout<<one.back()<<" "<<1<<endl;
                        one.pop_back();
                    }
                    else{
                        cout<<two.back()<<" "<<2<<endl;
                        two.pop_back();
                    }
                }
                else if(one.size())
                {
                    if(c1==2)
                    {
                        cout<<one.back()<<" "<<c2<<endl;
                        one.pop_back();
                    }
                    else{
                        cout<<one.back()<<" "<<c1<<endl;
                        one.pop_back();
                    }
                }
                else if(two.size())
                {
                    if(c1==1)
                    {
                        cout<<two.back()<<" "<<c2<<endl;
                        two.pop_back();
                    }
                    else{
                        cout<<two.back()<<" "<<c1<<endl;
                        two.pop_back();
                    }
                }
            }
        }
        else{
            cout<<"Alice"<<endl;
            for(int i=1; i<=n; i++)
            {
                cout<<1<<" "<<2<<endl;
                int a,b;
                cin>>a>>b;
            }
        }
    }
}
