#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w,i,j;
    cin>>h>>w;
    int r[h+1];
    int c[w+1];
    char a[h+1][w+1];
    for(i=1;i<=h;i++)
    {
        cin>>r[i];
    }
    for(i=1;i<=w;i++)
    {
        cin>>c[i];
    }
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            a[i][j]='.';
        }
    }
    int g=1;
    for(i=1;i<=h;i++)
    {
        int x=r[i],f=0;
        for(j=1;j<=w;j++)
        {
            if(j<=x)
            {
                if(a[i][j]=='O')g=0;
                else
                a[i][j]='X';
            }
            else if(f==0)
            {
                f++;
                if(a[i][j]=='X')g=0;
                else
                a[i][j]='O';
            }
            if(g==0)break;
        }
         if(g==0)break;
    }
    if(g==0)
    {
        cout<<0<<endl;
        return 0;
    }
    g=1;
    for(j=1;j<=w;j++)
    {
        int x=c[j],f=0;
        for(i=1;i<=h;i++)
        {
            if(i<=x)
            {
                if(a[i][j]=='O')g=0;
                else
                a[i][j]='X';
            }
            else if(f==0)
            {
                f++;
                if(a[i][j]=='X')g=0;
                else
                a[i][j]='O';
            }
            if(g==0)break;
        }
         if(g==0)break;
    }
    /*for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    */
     if(g==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int ans=1;
   for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            if(a[i][j]=='.')
            {
                ans=(ans*2)%1000000007;
            }
        }
    }
    cout<<ans<<endl;
}
