#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t,n,i,j;
   cin>>t;
   while(t--)
   {
       cin>>n;
       ll a[n+1];
       map<ll,ll>mp;
       ll mx=LLONG_MIN;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
           mx=max(mx,a[i]);
           mp[a[i]]++;
       }
       ll ans=0;
       for(auto it:mp)
       {
            ll k=it.first;
            ans+=((mp[k]*(mp[k]-1))/2);
           for(ll x=1; ;x++)
           {
               ll ml=k*(1LL<<x);
               if(ml>mx)break;
               if(!mp[ml])continue;
               if((ml-k)==x)
               {
                   ans+=(mp[k]*mp[ml]);
               }
           }
       }
       cout<<ans<<endl;
   }
}
