#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,m,f,s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        priority_queue<pair<ll,ll>>pq;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i])
            pq.push({a[i],i+1});
        }
        vector<pair<ll,ll>>p;
        while(pq.size()>1)
        {
            auto f=pq.top();
            pq.pop();
            auto s=pq.top();
            pq.pop();
            p.push_back({f.second,s.second});
            f.first--;
            s.first--;
            if(f.first) pq.push(f);
            if(s.first) pq.push(s);
        }
       /* if(p.size()==0)
        {
            cout<<0<<endl;
            continue;
        }*/
        cout<<p.size()<<endl;
        for(i=0;i<p.size();i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    }
}
