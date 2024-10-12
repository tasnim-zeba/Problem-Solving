#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,b,sx,sy,f,f1;
    cin>>t;
    while(t--)
    {
        cin>>m;
        char s[2][m+1];
        int vis[2][m+1];
        b=0;
        sx=sy=-1;
        for(i=0; i<2; i++)
        {
            for(j=0; j<m; j++)
            {
                vis[i][j]=0;
                cin>>s[i][j];
                if(s[i][j]=='B')b++;
            }

        }
        for(j=0; j<m; j++)
        {
            if(s[0][j]=='B'&&sx==-1&&sy==-1)
            {
                sx=0;
                sy=j;
            }
            /*else  if(s[1][j]=='B'&&sx==-1&&sy==-1)
            {
                sx=1;
                sy=j;
            }*/
        }
        f=sx;
        for(j=sy; j<m;)
        {
            vis[f][j]=1;
            f1=f^1;
            if(!vis[f1][j]&&s[f1][j]=='B')
            {
                f=f1;
            }
            else if((j+1)<m)
            {
                if(s[f][j+1]=='B')
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        int p=0;
        for(i=0; i<2; i++)
        {
            for(j=0; j<m; j++)
            {
                if(vis[i][j]==1)p++;
                ///cout<<vis[i][j]<<" ";
            }
            ///cout<<endl;
        }
        if(p==b)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sx=sy=-1;
         for(j=0; j<m; j++)
        {
            vis[0][j]=vis[1][j]=0;
            if(s[1][j]=='B'&&sx==-1&&sy==-1)
            {
                sx=1;
                sy=j;
            }
        }
        f=sx;
        for(j=sy; j<m;)
        {
            vis[f][j]=1;
            f1=f^1;
            if(!vis[f1][j]&&s[f1][j]=='B')
            {
                f=f1;
            }
            else if((j+1)<m)
            {
                if(s[f][j+1]=='B')
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
         p=0;
        for(i=0; i<2; i++)
        {
            for(j=0; j<m; j++)
            {
                if(vis[i][j]==1)p++;
                ///cout<<vis[i][j]<<" ";
            }
            ///cout<<endl;
        }
        if(p==b)
        {
            cout<<"YES"<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}
