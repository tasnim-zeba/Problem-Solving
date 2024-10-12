#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j,x,y;
    cin>>n>>m;
    ll v[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    ll ans=0;
    while(m--)
    {
        cin>>x>>y;
        ans+=min(v[x],v[y]);
    }
    cout<<ans<<endl;
}
