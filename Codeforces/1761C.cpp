#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char b[n+1][n+1];
        set<int>s[n+1];
        for(i=1;i<=n;i++)
        {
            s[i].insert(i);
            for(j=1;j<=n;j++)
            {
                cin>>b[i][j];
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(b[i][j]=='1')
                {
                    s[j].insert(i);
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<s[i].size()<<" ";
            for(auto child:s[i])
            {
                cout<<child<<" ";
            }
            cout<<endl;
        }
    }
}

