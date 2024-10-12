#include <bits/stdc++.h>
#define dtb(n,x) bitset<n>(x).to_string()
using namespace std;
int const N=1005;
int a[N][N];
int vis[N][N];
int x=0,i,j,n,m;
void dfs(int i,int j)
{
    if(i<0||j<0||i>=n||j>=m||vis[i][j])
        return;
    vis[i][j]=1;
    x++;
    string s=dtb(4,a[i][j]);
    if(s[0]=='0')
        dfs(i-1,j);
    if(s[1]=='0')
        dfs(i,j+1);
    if(s[2]=='0')
        dfs(i+1,j);
    if(s[3]=='0')
        dfs(i,j-1);

}

int main()
{
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             cin>>a[i][j];
        }
    }
    vector<int> v;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(vis[i][j])continue;
            x=0;
            dfs(i,j);
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}
