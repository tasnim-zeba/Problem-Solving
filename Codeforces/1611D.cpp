#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,x,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int b[n+1],dis[n+1],p[n+1],ans[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            if(b[i]==i)
            {
                r=i;
            }
        }
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
            mp[p[i]]=i;
        }
        j=1;
        if(p[1]!=r)
        {
            cout<<-1<<endl;
            continue;
        }
        dis[r]=ans[r]=0;
        for(i=2;i<=n;i++)
        {
             if(mp[b[p[i]]]<mp[p[i]])
             {
                 //dis[p[i]]=dis[p[i-1]]+1;
                 if(dis[p[i-1]]>dis[b[p[i]]])
                 {
                     ans[p[i]]=dis[p[i-1]]-dis[b[p[i]]]+1;
                    dis[p[i]]=dis[b[p[i]]]+ans[p[i]];
                 }
                 else
                 {
                     ans[p[i]]=1;
                     dis[p[i]]=dis[b[p[i]]]+ans[p[i]];
                 }
             }
             else
             {
                 j=0;
                 break;
             }
        }
        if(j==0)
        {
            cout<<-1<<endl;
            continue;
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
