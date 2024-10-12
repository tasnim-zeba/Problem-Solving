#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,k,fi,fj,li,lj,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int a[n+1][m+1],v[n+1][m+1];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[i][j];
                v[i][j]=2;
            }
        }
        ans=0;
        for(fi=1,fj=1,li=n,lj=m; ;fi++,fj++,li--,lj--)
        {
            if( v[fi][j]==-1)break;
            for(j=fj,i=li;j<=m&&i>=1;j++,i--)
            {
                 v[fi][j]=-1;
                 if(a[fi][j]!=a[i][lj])
                 {
                     ans++;
                     a[i][lj]=a[fi][j];
                 }
            }
            if(m>n)
            {
                for(i=j,j=m-1;i<=j;i++,j--)
                {
                v[fi][i]=-1;
                v[fi][j]=-1;
                 if(a[fi][i]!=a[fi][j])
                 {
                     ans++;
                     a[fi][j]=a[fi][i];
                 }
                }
            }
           else if(m<n)
            {
                for(i=1,j=i;i<=j;i++,j--)
                {
                v[i][lj]=-1;
                v[j][li]=-1;
                 if( a[i][lj]!= a[j][li])
                 {
                     ans++;
                     a[j][li]=a[i][lj];
                 }
                }
            }
        }
         for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
