#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vector<ll>v;
        for(i=1;i<=n;i++)
        {
            cin>>r;
            v.push_back(r);
        }
        sort(v.begin(),v.end());
        auto it=upper_bound(v.begin(),v.end(),m);
        if(it==v.end())
        {
            cout<<1<<endl;
            continue;
        }
        ll p=it-v.begin();
        //cout<<*it<<endl;
        multiset<ll>ms;
        ms.insert(p);
        ll w=0;
        ll vis[1005];
        for(i=1;i<1005;i++)vis[i]=0;
        for(i=0;i<n;i++)
        {
            if(vis[v[i]]==0)
            {
                vis[v[i]]=1;
                if(v[i]>m)
                {
                    ms.insert(i+1);
                    w=i;
                }
                else
                {
                    ms.insert(i);
                    w=i;
                }
            }
            else
            {
                if(v[i]>m)
                {
                    ms.insert(w+1);
                }
                else
                {
                    ms.insert(w);
                }
            }
        }
        ll k=0;
        ///cout<<p<<endl;
        for(auto it:ms)
        {
            ///cout<<it<<" ";
            if(it>p)k++;
        }
        cout<<k+1<<endl;
    }
}


