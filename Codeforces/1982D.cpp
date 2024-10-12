#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,m,k;
    cin>>t;
    while(t--)
    {
        int n, m, k;
        cin>>n>>m>>k;
        int a[n+1][m+1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        char s[n+1][m+1];
        int fre[n+1][m+1];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>s[i][j];

            }
        }
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                fre[i][j]=0;
            }
        }
        ll diff = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='0')
                {
                    diff = diff+a[i][j];
                    fre[i+1][j+1]=1;
                }
                else{
                    diff = diff - a[i][j];
                    fre[i+1][j+1]=-1;
                }
                fre[i+1][j+1] = fre[i+1][j+1]+fre[i+1][j]+fre[i][j+1]-fre[i][j];
                //cout<<fre[i][j]<<" ";
            }
            //cout<<endl;
        }
        if(diff==0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll g=0;
        for(int i=0; i<=n-k; i++)
        {
            for(int j=0; j<=m-k; j++)
            {
                ll sum = fre[i+k][j+k] - fre[i][j+k] - fre[i+k][j] + fre[i][j];
                if(sum)
                {
                    g=__gcd(g, sum);
                }
            }
        }
        if(g==0)
        {
            cout<<"NO"<<endl;
        }
        else if(diff%g==0)
        {
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    }
}
