#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,m,d,i,j,ans,res;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>d;
        priority_queue<ll, vector<ll>, greater<ll> >pq;
        ans=0;
        ll a[n+1];
        for(i=1; i<=n; i++)cin>>a[i];
        res=0,ans=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]>0)
            {
                if(pq.size()<m)
                {
                    pq.push(a[i]);
                    ans=ans+a[i];
                    res=max(res,ans-d*i);
                }
                else
                {
                    int x=pq.top();
                    if(a[i]>x)
                    {
                        pq.pop();
                        pq.push(a[i]);
                        ans=ans-x;
                        ans=ans+a[i];
                        res=max(res,ans-d*i);
                    }
                }
            }
        }
        cout<<res<<endl;
    }
}
