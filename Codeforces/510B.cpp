#include<bits/stdc++.h>
using namespace std;
vector<int>g[2550];
char s[55][55];
int vis[55][55];
int c;
int n,m,i,j;
vector<pair<int,int>>moves={{1,0},{-1,0},{0,1},{0,-1}};
void dfs(char ch,int si,int sj,int pi,int pj)
{
    vis[si][sj]=1;
    for(auto mv:moves)
    {
        int x=si+mv.first;
        int y=sj+mv.second;
        if(x>=0&&x<n&&y>=0&&y<m)
        {
            if(pi==x&&pj==y)continue;
            if(s[x][y]==ch&&vis[x][y])
            {
                c=1;
            }
            if(s[x][y]==ch&&vis[x][y]==0)
            {
                dfs(ch,x,y,si,sj);
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>s[i][j];
        }
    }
    for(char ch='A'; ch<='Z'; ch++)
    {
        c=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(s[i][j]==ch&&!vis[i][j])
                {
                    dfs(ch,i,j,-1,-1);
                    if(c==1)break;
                }
            }
            if(c==1)break;
        }
        if(c==1)break;
    }
    if(c==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
