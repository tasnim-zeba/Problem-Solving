#include<bits/stdc++.h>
using namespace std;
int n =(int)2e5+5;
int a[20][(int)2e5+5];
///int n=200005;
///int a[20][200005]={0};
int main()
{
    int t,l,r,i,j,mx;
    //n=200005;
    //int a[20][n];
    //int a[20][200005]={0};
   /* for(i=0;i<20;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }*/
    for(i=0;i<20;i++)
    {
        for(j=1;j<n;j++)
        {
            if((j>>i)&1)
            {
                a[i][j]=1;
            }
            a[i][j]+=a[i][j-1];
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        mx=INT_MIN;
        for(i=0;i<20;i++)
        {
            mx=max(mx,(a[i][r]-a[i][l-1]));
        }
        cout<<(r-l+1)-mx<<endl;
    }
}
