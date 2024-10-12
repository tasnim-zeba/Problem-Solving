#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char a[n+1][n+1];
        string s;
        cin>>s;
        int c=1,f;
        f=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    a[i][j]='X';
                }
                else
                {
                     a[i][j]='-1';
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(s[i]=='1'||s[j]=='1')
                {
                    a[i][j]='=';
                }
            }
        }
        f=0,c=1;
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='-1')
                {

                }
            }
        }

    }
}

