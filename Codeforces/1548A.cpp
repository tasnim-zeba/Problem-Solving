#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,u,v,q,f,c,x,y;
    cin>>n>>m;
    vector<int> b(n+1);
    vector<int> a(n+1);
    for(i=1; i<=n; i++)
    {
        b[i]=0;
    }
    while(m--)
    {
        cin>>u>>v;
        if(u>v)
        {
            b[v]++;
        }
        else
        {
            b[u]++;
        }
    }
    int ans=0;
    for(i=1; i<=n; i++)
    {
        if(b[i]==0)ans++;
    }
    cin>>q;
    while(q--)
    {
        a=b;
        cin>>c;
        if(c==3)
        {
            cout<<ans<<endl;
        }
        else if(c==1)
        {
            cin>>u>>v;
            if(u>v)
            {
                if(b[v]==0)ans--;
                b[v]++;
            }
            else
            {
                if(b[u]==0)ans--;
                b[u]++;
            }
        }
        else if(c==2)
        {
            cin>>u>>v;
            if(u>v)
            {
                b[v]--;
                if(b[v]==0)ans++;
            }
            else
            {
                b[u]--;
                if(b[u]==0)ans++;
            }
        }

    }


}
