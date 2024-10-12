#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,l,r,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,vector<ll>>mp;
        for(i=0;i<n;i++)
        {
            cin>>x;
            mp[x].push_back(i);
        }
        ll ans=0;
        for(auto it:mp)
        {
            x=it.first;
            vector<ll>y=it.second;
            ll sz=y.size();
            ll p[sz];
            p[sz-1]=n-y.back();
            for(i=sz-2;i>=0;i--)
            {
                p[i]=p[i+1]+n-y[i];
            }
            for(i=0;i<sz-1;i++)
            {
                ans=ans+(y[i]+1)*p[i+1];
            }
        }
        cout<<ans<<endl;
    }
}
