#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],p[n+1];
        vector< pair<ll,ll> >pa;
        ll sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            pa.push_back({a[i],i+1});
        }
        sort(pa.begin(),pa.end());
        ///cout<<pa.size()<<endl;
        ll c=1;
        for(i=n-2; i>=0; i--)
        {
            sum=sum-pa[i+1].first;
            if(sum>=pa[i+1].first)
            {
                c++;
            }
            else
            {
                break;
            }
        }
        vector<ll>v;
        for(i=n-1;i>=(n-c);i--)
        {
            v.push_back(pa[i].second);
        }
        sort(v.begin(),v.end());
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
