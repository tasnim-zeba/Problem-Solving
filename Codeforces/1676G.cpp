#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
ll bl[4005],wh[4005];
ll ans=0;
void dfs(ll vertex,ll par,vector<ll>g[])
{
    if(s[vertex-1]=='W')
    {
        wh[vertex]++;
    }
    else
    {
        bl[vertex]++;
    }
    for(ll child:g[vertex])
    {
        if(child==par)continue;
        dfs(child,vertex,g);
        bl[vertex]+=bl[child];
        wh[vertex]+=wh[child];
    }
    if(bl[vertex]==wh[vertex])
    {
        ans++;
    }
}
int main()
{
     ll t,i,j,n,x,y;
     cin>>t;
     while(t--)
     {
         ans=0;
         cin>>n;
        vector<ll>g[n+1];
         for(i=0;i<n+1;i++)
         {
             bl[i]=0;
             wh[i]=0;
         }
         for(i=2;i<=n;i++)
         {
             cin>>x;
             g[x].push_back(i);
         }
         cin>>s;
         dfs(1,-1,g);
         cout<<ans<<endl;
     }
}
