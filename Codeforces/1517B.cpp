#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        ll a[n+1][m+1];
        vector< pair<ll,ll> >v;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>a[i][j];
                v.push_back(make_pair(a[i][j],i));
            }
        }
        sort(v.begin(),v.end());
        for(j=1;j<=m;j++)
        {
           swap(a[v[i].second][j],a[][]);
        }
    }
}
