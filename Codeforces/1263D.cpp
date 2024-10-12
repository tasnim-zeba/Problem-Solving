#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> g(200030);
int c;
int ar[30];
int vis[200030];
void dfs(int x)
{
    vis[x]=1;
    for(auto child:g[x])
    {
        if(vis[child]);
        else
        {
            dfs(child);
        }
    }
}
int main()
{
    int n,i,j;
    cin>>n;
    string s[n+1];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<s[i].size();j++)
        {
            int y=(int)(s[i][j]-'a')+1;
            ar[y]=1;
            ///cout<<y<<endl;
            g[y].push_back(i+30);
            g[i+30].push_back(y);
        }
    }
    c=0;
    for(i=1;i<=30;i++)
    {
        if(ar[i]&&vis[i]==0)
        {
            dfs(i);
            c++;
        }
    }
    cout<<c<<endl;
}
