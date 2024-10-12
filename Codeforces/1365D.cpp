#include<bits/stdc++.h>
using namespace std;
int n,m,i,j,blk[51][51],vis[51][51];
char a[51][51];
void dfs(int i,int j)
{
   // cout<<i<<" "<<j<<endl;
    if(blk[i][j]||i<1||i>n||j<1||j>m||vis[i][j])return;
    vis[i][j]=1;
    if(i-1>=1)dfs(i-1,j);
    if(j-1>=1)dfs(i,j-1);
    if(i+1<=n)dfs(i+1,j);
    if(j+1<=m)dfs(i,j+1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>a[i][j];
                blk[i][j]=0;
            }
        }
        int f=1;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]=='B')
                {
                    if(i-1>=1&&a[i-1][j]=='G'||j-1>=1&&a[i][j-1]=='G'||i+1<=n&&a[i+1][j]=='G'||j+1<=m&&a[i][j+1]=='G')
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(f==0)break;
        }
        if(f==0)
        {
            cout<<"No"<<endl;
            continue;
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]=='B')
                {
                    blk[i][j]=1;
                    if(i-1>=1)blk[i-1][j]=1;
                    if(j-1>=1)blk[i][j-1]=1;
                    if(i+1<=n)blk[i+1][j]=1;
                    if(j+1<=m)blk[i][j+1]=1;
                }
                else if(a[i][j]=='#')blk[i][j]=1;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                vis[i][j]=0;
            }
        }
        dfs(n,m);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(vis[i][j]==0&&a[i][j]=='G')
                {
                    f=0;
                    break;
                }
            }
            if(f==0)break;
        }
        if(f==0)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
