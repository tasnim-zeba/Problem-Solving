#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    int n,i,j,mx,n1,r,l;
    cin>>n;
    n1=n;
    mx=0;
    l=0;
    while(n1)
    {
        r=n1%10;
        l++;
        mx=max(mx,r);
        n1=n1/10;
    }
    string a[mx+1];
    n1=n;
    j=l-1;
    while(n1)
    {
        r=n1%10;
        n1=n1/10;
        for(i=0;i<r;i++)
        {
            a[i][j]='1';
        }
        for(i=r;i<mx;i++)
        {
            a[i][j]='0';
        }
        j--;
    }
    cout<<mx<<endl;
    for(i=0;i<mx;i++)
    {
        int f=0;
         for(j=0;j<l;j++)
         {
             if(a[i][j]=='1')
             {
                 f=1;
                 cout<<a[i][j];
             }
             else if(f==1)
             {
                 cout<<a[i][j];
             }
         }
         cout<<" ";
    }
    cout<<endl;
}

