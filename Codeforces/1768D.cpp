#include<bits/stdc++.h>
using namespace std;
int const N=2e5+5;
vector<vector<int>>g(N);
int vis[N],f;
void dfs(int node,int c)
{
    f++;
    vis[node]=c;
    for(auto child:g[node])
    {
        if(vis[child])continue;
        else
        {
            dfs(child,c);
        }
    }
}
int main()
{
    int t,n,i,j,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int p[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
            vis[i]=0;
            g[i].clear();
        }
        for(i=1;i<=n;i++)
        {
            if(p[i]!=i)
            g[p[i]].push_back(i);
        }
        c=1;
        ans=0;
        for(i=1;i<=n;i++)
        {
            if(g[i].size()==0)
            {
                vis[i]=c;
                c++;
            }
            else if(vis[i]==0)
            {
                f=0;
                dfs(i,c);
                ans=ans+f-1;
                c++;
            }
        }
        j=0;
        for(i=1;i<n;i++)
        {
            if(vis[i]==vis[i+1])
            {
                j=1;
                break;
            }
        }
       // cout<<ans<<endl;
        if(j==1)
        {
            cout<<ans-1<<endl;
        }
        else
        {
            cout<<ans+1<<endl;
        }
    }
}
