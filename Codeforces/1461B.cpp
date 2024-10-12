#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char s[n+2][m+2];
        int a[n+2][m+2];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='*')a[i][j]=1;
                else a[i][j]=0;
            }
        }
        for(i=0;i<=n+1;i++)
        {
            for(j=0;j<=m+1;j++)
            {
                if(i==0||j==0||i==n+1||j==m+1)
                {
                    a[i][j]=0;
                }
            }
        }
        for(i=n;i>=1;i--)
        {
            for(j=1;j<=m;j++)
            {
                if(a[i][j]==1)
                {
                    int x=min(a[i+1][j-1],min(a[i+1][j+1],a[i+1][j]));
                    a[i][j]=x+1;
                }
            }
        }
        long long ans=0;
        for(i=0;i<=n+1;i++)
        {
            for(j=0;j<=m+1;j++)
            {
                ans+=a[i][j];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
