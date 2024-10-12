#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,k,i,j,x,f,y;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int a[n+1][n+1];
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)a[i][j]=0;
        }
        if(k%n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
        x=1,y=1,f=k;
        int g=1;
        while(f)
        {
            while(x<=n&&y<=n)
            {
                a[x][y]=1,x++,y++,f--;
                if(f==0)break;
            }
            if(f==0)break;
            if(x<=n)
            {
                y=1;
            }
            else{
                g++;
                x=1,y=g;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}

