#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if((n+m-2)>k||((n+m-2)-k)%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            char a[n+1][m+1],b[n+1][m+1];
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    a[i][j]=b[i][j]='#';
                }
            }
            a[2][1]='B';
            for(i=1; i<m; i++)
            {
                if(i%2)a[1][i]='B';
                else a[1][i]='R';
                if(n%2==0)
                {
                    if(i%2)a[n][i]='B';
                    else a[n][i]='R';
                }
                else
                {
                    if(i%2)a[n][i]='R';
                    else a[n][i]='B';
                }
            }
            if(a[n][m-1]=='R')a[n-1][m-1]='B';
            else a[n-1][m-1]='R';

            for(i=1;i<n;i++)
            {
                if(i%2)b[i][1]='R';
                else b[i][1]='B';
            }
            b[1][2]=b[1][1];
            b[n-1][m-1]=b[n-1][m]=a[n][m-1];
            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    if(a[i][j]=='#')a[i][j]='R';
                    if(b[i][j]=='#')b[i][j]='R';
                }
            }
            for(i=1; i<=n; i++)
            {
                for(j=1; j<m; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
            for(i=1; i<n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    cout<<b[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}
