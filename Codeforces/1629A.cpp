#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n+1],b[n+1];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        vector< pair<ll,ll> >v;
        vector< pair<ll,ll> >:: iterator it;
        for(i=0;i<n;i++)
        {
            v.push_back(make_pair(a[i],b[i]));
        }
        sort(v.begin(),v.end());
        for(it=v.begin();it!=v.end();it++)
        {
            if((it->first)<=k)
            {
                k=k+(it->second);
            }
        }
        cout<<k<<endl;
    }
}
