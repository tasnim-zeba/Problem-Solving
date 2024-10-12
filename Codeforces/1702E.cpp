#include<bits/stdc++.h>
using namespace std;
int f=1;
vector<int>g[200002],col,deg;
void dfs(int x,int c)
{
    col[x]=c;
    c=c^1;
    for(auto ch:g[x])
    {
        if(col[ch]==-1)
        {
            dfs(ch,c);
        }
        else if(col[ch]==col[x])
        {
            f=0;
            return;
        }
    }
}
int main()
{
    int t,n,i,j,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=1;
        col.assign(n+1,-1);
        deg.assign(n+1,0);
        for(i=1;i<=n;i++)
        {
            g[i].clear();
        }
        for(i=1;i<=n;i++)
        {
            cin>>a>>b;
            deg[a]++,deg[b]++;
            if(deg[a]>2||deg[b]>2)
            {
                f=0;
            }
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(col[i]==-1)
            {
                dfs(i,0);
            }
        }
        if(f==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
