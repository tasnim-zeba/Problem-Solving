#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t, n, i, j, m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1][m+1], b[n+1][m+1];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                char ch;
                cin>>ch;
                a[i][j] = ch - '0';
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                char ch;
                cin>>ch;
                b[i][j] = ch - '0';
            }
        }
        for(i=1; i<n; i++)
        {
            for(j=1; j<m; j++)
            {
                if(a[i][j] == 0)
                {
                    if(b[i][j] == 1)
                    {
                        a[i][j] = (a[i][j]+1)%3,a[i+1][j+1] = (a[i+1][j+1]+1)%3,a[i+1][j] = (a[i+1][j]+2)%3,a[i][j+1] = (a[i][j+1]+2)%3;
                    }
                    else if(b[i][j] == 2)
                    {
                        a[i][j] = (a[i][j]+2)%3,a[i+1][j+1] = (a[i+1][j+1]+2)%3,a[i+1][j] = (a[i+1][j]+1)%3,a[i][j+1] = (a[i][j+1]+1)%3;
                    }
                }
                else if(a[i][j] == 1)
                {
                    if(b[i][j] == 2)
                    {
                        a[i][j] = (a[i][j]+1)%3,a[i+1][j+1] = (a[i+1][j+1]+1)%3,a[i+1][j] = (a[i+1][j]+2)%3,a[i][j+1] = (a[i][j+1]+2)%3;
                    }
                    else if(b[i][j] == 0)
                    {
                        a[i][j] = (a[i][j]+2)%3,a[i+1][j+1] = (a[i+1][j+1]+2)%3,a[i+1][j] = (a[i+1][j]+1)%3,a[i][j+1] = (a[i][j+1]+1)%3;
                    }
                }
                else if(a[i][j] == 2)
                {
                    if(b[i][j] == 0)
                    {
                        a[i][j] = (a[i][j]+1)%3,a[i+1][j+1] = (a[i+1][j+1]+1)%3,a[i+1][j] = (a[i+1][j]+2)%3,a[i][j+1] = (a[i][j+1]+2)%3;
                    }
                    else if(b[i][j] == 1)
                    {
                        a[i][j] = (a[i][j]+2)%3,a[i+1][j+1] = (a[i+1][j+1]+2)%3,a[i+1][j] = (a[i+1][j]+1)%3,a[i][j+1] = (a[i][j+1]+1)%3;
                    }
                }
            }
        }
        int f = 1;
        for(i=1; i<=n; i++)
        {
            if(a[i][m]!=b[i][m])f=0;
        }
        for(i=1; i<=m; i++)
        {
            if(a[n][i]!=b[n][i])f=0;
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
