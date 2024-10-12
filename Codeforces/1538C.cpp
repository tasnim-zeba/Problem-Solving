#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,l,r,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        vector<ll>v;
    vector<ll>:: iterator it1;
    vector<ll>:: iterator it2;
        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ans=0;
        for(i=0;i<n-1;i++)
        {
            it1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
            it2=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
            ans=ans+(it2-it1);
        }
        cout<<ans<<endl;
    }
    return 0;
}
