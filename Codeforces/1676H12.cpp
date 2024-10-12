#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,j,idx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        multiset<ll>s;
        multiset<ll>::iterator it;
        ll ans=0;
        for(i=0;i<n;i++)
        {
            it=s.lower_bound(a[i]);
            if(it==s.end());
            else
            {
                idx=distance(s.begin(),it);
                ans=ans+(s.size()-idx);
            }
            s.insert(a[i]);
        }
        cout<<ans<<endl;
    }
}
