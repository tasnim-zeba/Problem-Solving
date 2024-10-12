#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,i,j;
    cin>>r>>c;
    if(r==1&&c==1){cout<<0<<endl;
    return 0;}
    else if(r==1)
    {
        for(j=1;j<=c;j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
        return 0;
    }
    else if(c==1)
    {
        for(j=1;j<=r;j++)
        {
            cout<<j+1<<endl;
        }
        return 0;
    }
    int a[r+1][c+1];
    vector<int>vr(r+1),vc(c+1);
    vr[1]=r+1;
    for(i=2;i<=r;i++)
    {
        vr[i]=i;
    }
    vc[1]=1;
    for(i=2;i<=c;i++)
    {
        vc[i]=i+r;
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j==1)
            {
                a[i][j]=vr[i];
            }
            else
            {
                a[i][j]=vr[i]*vc[j];
            }
        }
    }
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
