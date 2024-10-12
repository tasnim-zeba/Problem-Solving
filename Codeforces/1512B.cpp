#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,r1,c1,r2,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char s[n+1][n+1];
        ll c=0;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
               cin>>s[i][j];
               if(s[i][j]=='*'&&c==0)
               {
                   r1=i;
                   c1=j;
                   c=1;
               }
               else if(s[i][j]=='*'&&c==1)
               {
                   r2=i;
                   c2=j;
               }
            }
        }
        if(r1==r2)
        {
            if(r1==0)
            {
                s[r1+1][c1]='*';
                s[r1+1][c2]='*';
            }
            else
            {
                s[r1-1][c1]='*';
                s[r1-1][c2]='*';
            }
        }
        else if(c1==c2)
        {
             if(c1==0)
            {
                s[r1][c1+1]='*';
                s[r2][c2+1]='*';
            }
            else
            {
                s[r1][c1-1]='*';
                s[r2][c2-1]='*';
            }
        }
        else
        {
            s[r1][c2]='*';
            s[r2][c1]='*';
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
