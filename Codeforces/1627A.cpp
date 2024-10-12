#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,r,c,i,j,fr,fc,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>r>>c;
        char s[n+1][m+1];
        f=fr=fc=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>s[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(s[i][j]=='B')
                {
                    f=1;
                }
                if(s[r-1][j]=='B')
                {
                    fr=1;
                }
                if(s[i][c-1]=='B')
                {
                    fc=1;
                }
            }
        }
        //cout<<fr<<" "<<fc<<endl;
        if(f==0)
        {
            cout<<-1<<endl;
        }
        else if(s[r-1][c-1]=='B')
        {
            cout<<0<<endl;
        }
        else{
            if(fr==0&&fc==0)
            {
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}
