#include<bits/stdc++.h>
using namespace std;
int vis[30][30],i,k;
vector<int>path;
void dfs(int v)
{
    for(i=k;i>=1;i--)
    {
        if(vis[v][i])continue;
        else
        {
            vis[v][i]=1;
            path.push_back(i);
            dfs(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n>>k;
    string s,ans;
    s='a';
    for(i=1;i<k;i++)
    {
        s+='a'+i;
        s+='a'+i;
    }
    for(i=1;i<=k;i++)
    {
        vis[i][i]=1;
        if((i+1)<=k)
        {
            vis[i][i+1]=1;
        }
    }
    dfs(k);
    for(i=0;i<path.size();i++)
    {
        s+='a'+path[i]-1;
    }
    ans='a';
    while(ans.size()<n)
    {
        ans+=s;
    }
    cout<<ans.substr(0,n)<<endl;
}
