#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int indeg[n+1],del[n+1];
        for(i=1;i<=n;i++)indeg[i]=0,del[i]=0;
        vector<int>g[n+1];
        for(i=1;i<n;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
            indeg[u]++;
            indeg[v]++;
        }
        queue<int>q;
        int m=0;
        for(i=1;i<=n;i++)
        {
            if(indeg[i]<=1)
            {
                q.push(i);
                del[i]=1;
            }
        }
        while(q.size()&&k--)
        {
            int h=q.size();
            for(i=1;i<=h;i++)
            {
                int x=q.front();
                q.pop();
                m++;
                for(auto ch:g[x])
                {
                    indeg[ch]--;
                    if(indeg[ch]<=1&&del[ch]!=1)
                    {
                        q.push(ch);
                        del[ch]=1;
                    }
                }
            }
        }
        cout<<n-m<<endl;
    }
}
