#include<bits/stdc++.h>
using namespace std;
int n,m,k;
char a[505][505];
vector<pair<int,int>>v;
int vis[505][505];
bool isvalidx(int x)
{
    if(x>=1&&x<=n)return true;
    else return false;
}
bool isvalidy(int y)
{
    if(y>=1&&y<=m)return true;
    else return false;
}
void dfs(int x,int y)
{
    vis[x][y]=1;
    v.push_back({x,y});
    if(isvalidy(y+1)&&a[x][y+1]=='.'&&vis[x][y+1]==0)
    {
        dfs(x,y+1);
    }
    if(isvalidx(x+1)&&a[x+1][y]=='.'&&vis[x+1][y]==0)
    {
        dfs(x+1,y);
    }
    if(isvalidy(y-1)&&a[x][y-1]=='.'&&vis[x][y-1]==0)
    {
        dfs(x,y-1);
    }
    if(isvalidx(x-1)&&a[x-1][y]=='.'&&vis[x-1][y]==0)
    {
        dfs(x-1,y);
    }
    return;
}
int main()
{
    int i,j,c,x,y,f;
    cin>>n>>m>>k;
    f=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.'&&f==0)
            {
                x=i;
                y=j;
                f=1;
            }
        }
    }
    if(f==0)
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        return 0;
    }
    dfs(x,y);
    for(i=v.size()-1; i>=0; i--)
    {
        if(k==0)break;
        a[v[i].first][v[i].second]='X';
        k--;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
