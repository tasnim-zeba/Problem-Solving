#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll s=0,ans,s1;
    int n,m,i,j,p;
    cin>>n>>m;
    vector<vector<int> >x(100006),y(100006);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>p;
            x[p].push_back(i);
            y[p].push_back(j);
        }
    }
    ans=0;
    for(i=1;i<100006;i++)
    {
        sort(x[i].begin(),x[i].end());
        s=0;
        for(j=0;j<x[i].size();j++)
        {
            s=s+x[i][j];
        }
        for(j=0;j<x[i].size();j++)
        {
            s=s-x[i][j];
            ll r=x[i].size()-j-1;
            ans=ans+s-r*x[i][j];
        }
        sort(y[i].begin(),y[i].end());
        s=0;
        for(j=0;j<y[i].size();j++)
        {
            s=s+y[i][j];
        }
        for(j=0;j<y[i].size();j++)
        {
            s=s-y[i][j];
            ll r=y[i].size()-j-1;
            ans=ans+s-r*y[i][j];
        }
    }
    cout<<ans<<endl;
}
