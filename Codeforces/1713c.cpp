#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int vis[n+2],ans[n+1];
        for(i=0; i<n; i++)
        {
            vis[i]=0;
        }
        vis[n]=1;
        for(i=n-1; i>=0; i--)
        {
            int x=i;
            int root=sqrt(x);
            int v;
            if((root*root)==x)
            {
                 v=(root+1)*(root+1)-x;
                 if(v>=n||vis[v])
                {
                    v=(root)*(root)-x;
                }
            }
            else
            {
                v=(root+2)*(root+2)-x;
                if(v>=n||vis[v])
                {
                    v=(root+1)*(root+1)-x;
                }
            }
            ans[i]=v;
            vis[v]=1;
           /* while(!vis[v])
            {
                vis[v]=1;
                i--;
                v++;
                if(i==0)
                {
                    ans[i]=v;
                    break;
                }
            }
            if(i==0)break;
                */
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
