#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,f,c,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char s[n+1][m+1];
        f=1;
        q=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>s[i][j];
                if(s[0][0]=='1')
                {
                    f=-1;
                }
                if(s[i][j]=='1')
                    {
                        q++;
                    }
            }
        }


        if(f==-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<q<<endl;
            for(i=0; i<n; i++)
            {
                for(j=m-1; j>0; j--)
                {
                    if(s[i][j]=='1')
                    {
                        cout<<i+1<<" "<<j<<" "<<i+1<<" "<<j+1<<endl;
                    }
                }
            }
            for(i=n-1; i>0; i--)
            {
                if(s[i][0]=='1')
                {
                    cout<<i<<" "<<1<<" "<<i+1<<" "<<1<<endl;
                }
            }
            //cout<<endl;
        }
    }
}
