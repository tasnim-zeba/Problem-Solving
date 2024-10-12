#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>>pq;
        multiset<ll>ms;
        ll p[n+1],h[n+1];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            pq.push({h[i],i});
        }
        for(i=0;i<n;i++)
        {
            cin>>p[i];
            ms.insert(p[i]);
        }
        int f=0;
        r=0;
        while(k>0)
        {
            r=r+k;
            while(pq.size())
            {
                ll f=pq.top().first;
                ll s=pq.top().second;
                if(f<=r)
                {
                    pq.pop();
                    ms.erase(ms.find(p[s]));
                }
                else
                {
                    break;
                }
            }
            if(pq.size()==0)
            {
                f=1;
                break;
            }
            k=k-(*ms.begin());
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
