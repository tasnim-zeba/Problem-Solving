#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,m,c,ans,k,mn;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n+1],pre[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        pre[1]=a[1];
        for(i=2;i<=n;i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        int f=0;
        for(i=1;i<=n;i++)
        {
            if(pre[i]<pre[m])f=1;
        }
        if(f==0)
        {
            cout<<0<<endl;
            continue;
        }
        mn=pre[m];
        ans=0;
        priority_queue<ll>pq1;
        for(i=m;i>=1;i--)
        {
            if(pre[i]<mn)
            {
                while(pq1.size()&&pre[i]<mn)
                {
                    ll tp=pq1.top();
                    tp=tp*(-1);
                    pq1.pop();
                    mn=mn+2*(tp);
                    ans++;
                }
            }
            pq1.push(a[i]);
        }
        mn=pre[m];
        priority_queue<ll,vector<ll>,greater<ll>>pq2;
        k=0;
        for(i=m+1;i<=n;i++)
        {
            pq2.push(a[i]);
            if(pre[i]+k<mn)
            {
                while(pq2.size()&&pre[i]+k<mn)
                {
                    ll tp=pq2.top();
                    tp=tp*(-1);
                    pq2.pop();
                    ///pre[i]=pre[i]+2*(tp);
                    k=k+2*tp;
                    ans++;
                }
            }

        }
        cout<<ans<<endl;
    }
}

