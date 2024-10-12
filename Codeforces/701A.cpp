#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,mx,mn,x;
    cin>>n;
    int vis[n+1],a[n+1];
    mn=INT_MAX;
    mx=INT_MIN;
    for(i=1;i<=n;i++)
    {
        vis[i]=0;
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i])continue;
        else{
                vis[i]=1;
            for(j=1;j<=n;j++)
            {
                if(vis[j])continue;
                else if(a[j]==(mx+mn-a[i]))
                {
                    cout<<i<<" "<<j<<endl;
                    vis[i]=vis[j]=1;
                    break;
                }
            }
        }
    }
}
