#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,oa,ob;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        oa=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            if(a[i])oa++;
        }
        ob=0;
        for(i=1; i<=n; i++)
        {
            cin>>b[i];
            if(b[i])ob++;
        }
        int f=1;
        for(i=1;i<=n;i++)
        {
            if(a[i]!=b[i])f=0;
        }
        if(f==1)
        {
            cout<<0<<endl;
        }
        else if(oa==ob)
        {
            cout<<1<<endl;
        }
        else
        {
            if(oa>ob)
            {
                ll x=oa-ob;
                for(i=1;i<=n;i++)
                {
                    if(x==0)break;
                    if(b[i]==0&&a[i]==1&&x)
                    {
                        b[i]=1;
                        x--;
                    }
                }
                ll ans=oa-ob;
                for(i=1;i<=n;i++)
                {
                    if(a[i]!=b[i])
                    {
                        ans++;
                        break;
                    }
                }
                cout<<ans<<endl;
            }
            else
            {
                ll x=ob-oa;
                for(i=1;i<=n;i++)
                {
                    if(x==0)break;
                    if(b[i]==1&&a[i]==0&&x)
                    {
                        a[i]=1;
                        x--;
                    }
                }
                ll ans=ob-oa;
                for(i=1;i<=n;i++)
                {
                    if(a[i]!=b[i])
                    {
                        ans++;
                        break;
                    }
                }
                cout<<ans<<endl;
            }
        }
    }
}
