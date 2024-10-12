#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1],h[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        h[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i])
        {
          if(h[i]-1==0)
          {
              h[i]=2;
          }
          else
          h[i]=h[i]-1;
          if(h[a[i]]+1==0)
          {
              h[a[i]]=2;
          }
          else
          h[a[i]]=h[a[i]]+1;
        }
    }
    queue<int>p,m,b;
    for(i=1;i<=n;i++)
    {
        if(h[i]==0)b.push(i);
        else if(h[i]==1)p.push(i);
        else m.push(i);
    }
    if(p.size()==0)
    {
        vector<int>v;
        for(i=1;i<=n;i++)
        {
            if(h[i]==0)v.push_back(i);
        }
        for(i=1;i<=n;i++)
        {
            if(h[i]==-1)v.push_back(i);
        }
        for(i=0;i<v.size();i++)
        {
            if(a[v[i]]==0)
            {
                if(i==v.size()-1)a[v[i]]=v[0];
                else
                a[v[i]]=v[i+1];
            }
        }
    }
    while(p.size()&&b.size())
    {
        int x=p.front();
        p.pop();
        int y=b.front();
        b.pop();
        a[x]=y;
        p.push(y);
    }
    if(p.size()==0)
    {
        vector<int>v;
        for(i=1;i<=n;i++)
        {
            if(h[i]==0)v.push_back(i);
        }
        for(i=1;i<=n;i++)
        {
            if(h[i]==-1)v.push_back(i);
        }
        for(i=0;i<v.size();i++)
        {
            if(a[v[i]]==0)
            {
                if(i==v.size()-1)a[v[i]]=v[0];
                else
                a[v[i]]=v[i+1];
            }
        }
    }
    while(p.size()&&m.size())
    {
        int x=p.front();
        p.pop();
        int y=m.front();
        m.pop();
        a[x]=y;
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
