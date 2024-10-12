#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int const N= 2e5+5;
vector<set<int>>g(N);
int vis[N], pathvis[N];
int c=0;
void dfs(int u)
{
    // cycle dectected
    vis[u] = 1;
    pathvis[u] =1;
    for(auto v: g[u])
    {
        if(vis[v])
        {
            if(pathvis[v]){
                c=1;
                return;
            }
           continue;
        }
        dfs(v);
        pathvis[v]=0;
    }
    pathvis[u] = 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1; i<=n; i++)
        {
            vis[i] = 0;
            pathvis[i] = 0;
            g[i].clear();
        }
        map<int,int>mp;
        for(int i=1; i<=k; i++)
        {
            int p=0;
            for(int j=1; j<=n; j++)
            {
                int x;
                cin>>x;
                if(j==2){
                    mp[x]++;
                }
                if(p && j>2)
                {
                    g[p].insert(x);
                }
                p=x;
            }
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int s, mx=0;
        for(int i=1; i<=n; i++)
        {
            if(mp[i]>=mx){
                mx= mp[i];
                s=i;
            }
        }
        c=0;
        //cout<<s<<endl;
        for(int i=1; i<=n; i++)
        {
            if(vis[i])continue;
            c=0;
            dfs(i);
            if(c==1)break;
        }
        dfs(s);
        if(c==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
