#include<bits/stdc++.h>
using namespace std;
int const N=2e5+5;
vector<int>g[N];
int depth[N];
void dfs(int node,int par)
{
    for(auto ch:g[node])
    {
        if(ch==par)continue;
        depth[ch]=depth[node]+1;
        dfs(ch,node);
    }
}
int main()
{
    int n,k,x,y,i,j;
    cin>>n>>k;
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1,-1);
    vector<int>v;
    for(i=1;i<=n;i++)
    {
      if(g[i].size()==1)
      {
          v.push_back(depth[i]);
      }
    }
    int m=v.size();
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int a[m+1],freq[m+1];
    for(i=1;i<=m;i++)
    {
       // cout<<depth[i]<<" ";
        a[i]=v[i-1];
        freq[i]=0;
    }
    i=1;
    while(k--)
    {
        a[i]--;
        freq[i]++;
        if(i+1>m)
        {
            a[i]--;
            freq[i]++;
            k--;
            i--;
        }
        else if(a[i]<a[i+1])
        {
            i++;
        }
        else if(a[i]>a[i+1])
        {
            a[i]--;
            freq[i]++;
            k--;
            i--;
        }
    }
    long long ans=0;
    for(i=1;i<=m;i++)
    {
        ///cout<<freq[i]<<" "<<depth[i]<<endl;
        ans=ans+(v[i-1]-freq[i]+1)*freq[i];
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
