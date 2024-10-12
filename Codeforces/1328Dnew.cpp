#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll c=1;
void dfs(ll vertex, vector<ll>g[],vector<ll>&ans)
{
    for(int child: g[vertex])
    {
        if(ans[child])continue;
        if(ans[vertex]==1)
        {
            ans[child]=2;
        }
        else
        {
            ans[child]=1;
        }
        dfs(child,g,ans);
    }
}
int main()
{
    ll q,n,i,j,k,e;
    cin>>q;
    while(q--)
    {
        cin>>n;
        vector<ll>g[n+1];
        ll a[n+1];
        vector<ll>ans(n+1);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            ans[i]=0;
        }
        e=0;
        for(i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                e++;
                g[i].push_back(i+1);
                g[i+1].push_back(i);
               /// cout<<i<<" "<<i+1<<endl;
            }
        }
        if(a[n-1]!=a[0])
        {
            e++;
            g[n-1].push_back(0);
            g[0].push_back(n-1);
            ///cout<<0<<" "<<n-1<<endl;
        }
        if(e==0)
        {
            cout<<1<<endl;
            for(i=0; i<n; i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
            continue;
        }
        else if(e==n)
        {
            if(n%2)
            {
                cout<<3<<endl;
                for(i=0; i<n-1; i++)
                {
                    if(i%2==0)
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<3<<" ";
                cout<<endl;
            }
            else
            {
                cout<<2<<endl;
                for(i=0; i<n; i++)
                {
                    if(i%2==0)
                        cout<<1<<" ";
                    else
                        cout<<2<<" ";
                }
                cout<<endl;
            }
            continue;
        }
        for(i=0; i<n; i++)
        {
            if(ans[i])continue;
            ans[i]=1;
            dfs(i,g,ans);
        }
        cout<<2<<endl;
        for(i=0; i<n; i++)
        {
            ///if(ans[i]==0)ans[i]=1;
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
