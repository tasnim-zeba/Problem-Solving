#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+1],b[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        int c=0;
        for(int i=0;i<n;i++)
        {
            c++;
            mp.insert(make_pair(b[i],c));
        }
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            v.push_back(mp[a[i]]);
            ///cout<<v[i]<<endl;
        }
        ll ans=1;
        for(int i=0;i<v.size()-1;i++)
        {
            if((v[i+1]-v[i])!=1)
            {
                ans++;
            }
        }
       /// cout<<ans<<endl;
       if(k>=ans)
       {
           cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}
