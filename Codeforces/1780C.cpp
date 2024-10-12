#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
///#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   /// fio
    ll t,n,k,i,j,r,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n+1],c[m+1];
        map<ll,ll>mp;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        priority_queue<ll>pqn,pqm;
        for(i=1;i<=m;i++)
        {
            cin>>c[i];
            pqm.push(c[i]);
        }
        for(auto it:mp)
        {
            pqn.push(it.second);
        }
        ll ans=0;
        while(pqn.size()&&pqm.size())
        {
            ll x=pqn.top();
            ll y=pqm.top();
            pqn.pop();
            pqm.pop();
            if(x==y)
            {
                ans=ans+x;
            }
            else if(x<y)
            {
                ans=ans+x;
                ///pqm.push(y-x);
            }
            else
            {
                ans=ans+y;
                pqn.push(x-y);
            }
        }
        cout<<ans<<endl;
    }
}
