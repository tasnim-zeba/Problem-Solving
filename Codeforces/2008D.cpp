#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
const int N=2e5+5;
vector<int>g[N];
int vis[N];
void dfs(int vertex, int x)
{
    ///cout<<vertex<<endl;
    vis[vertex]=x;
    for(int child:g[vertex])
    {
        ///cout<<"parent "<<vertex<<",child "<<child<<endl;
        if(vis[child])continue;
        dfs(child, x);
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
        int p[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>p[i];
            g[i].clear();
            vis[i]=0;
        }
        for(int i=1; i<=n; i++)
        {
            g[i].push_back(p[i]);
        }
        cin>>s;
        int x=1;
        for(int i=1; i<=n; i++)
        {
            if(vis[i])continue;
            dfs(i, x);
            x++;
        }
        vector<int>ans;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            //cout<<vis[i+1]<<endl;
            if(s[i]=='0'){
                mp[vis[i+1]]++;
            }
        }
        for(int i=1; i<=n; i++)
        {
            ans.push_back(mp[vis[i]]);
        }
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
