#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,k,i,j,c,mn,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        char s[n+1][m+1];
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cin>>s[i][j];
            }
        }
        mn=0;
        for(i=n-1; i>=1; i--)
        {
            for(j=1; j<m-1; j++)
            {
                c=0;
                if(s[i][j]=='*'||s[i][j]=='#')
                {
                    x1=x2=i;
                    y1=y2=j;
                    c=0;
                    vector<pair<int,int>>pa;
                    while((s[x1][y1]=='*'||s[x1][y1]=='#')&&(s[x2][y2]=='*'||s[x2][y2]=='#'))
                    {
                        pa.push_back({x1,y1});
                        pa.push_back({x2,y2});
                        x1--,y1--,x2--,y2++;
                        c++;
                        if((x1<0||x1>=n)||(x2<0||x2>=n)||(y2<0||y2>=m)||(y1<0||y1>=m))
                        {
                            break;
                        }
                    }
                    c--;
                    if(c<k&&s[i][j]=='*')
                    {
                        cout<<"NO"<<endl;
                        mn=1;
                        break;
                    }
                    if(c>=k)
                    {
                        for(int r=0; r<pa.size(); r++)
                        {
                            s[pa[r].first][pa[r].second]='#';
                        }
                    }
                }
                if(mn==1)break;
            }
            if(mn==1)break;
        }
        if(mn==1)
        {
            continue;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(s[i][j]=='*')mn=1;
            }
        }
        /// cout<<mn<<endl;
        if(mn==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
