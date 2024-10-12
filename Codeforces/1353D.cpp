#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,l,r,c,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a(n+1);
        for(i=0; i<n; i++)
        {
            a[i]=0;
        }
        priority_queue<pair<ll,pair<ll,ll>>>pq;
        pq.push({n,{0,(-1)*(n-1)}});
        c=1;
        while(pq.size())
        {
            ll x,y;
            x=pq.top().first;
            l=pq.top().second.first;
            l=l*(-1);
            r=pq.top().second.second;
            r=r*(-1);
            if(x%2)
            {
                m=(l+r)/2;
                a[m]=c;
                c++;
            }
            else
            {
                m=(l+r-1)/2;
                a[m]=c;
                c++;
            }
            pq.pop();
            if((m-1)>=0&&(l<=(m-1)))
            {
                pq.push({m-1-l+1,{(-1)*l,(-1)*(m-1)}});
            }
            if((m+1)<n&&((m+1)<=r))
            {
                pq.push({r-(m+1)+1,{(-1)*(m+1),(-1)*r}});
            }
        }
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}
