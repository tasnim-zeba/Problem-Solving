#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(const pair<ll,ll>&a,pair<ll,ll>&b)
{
    if(a.first==b.first)return (a.second<b.second);
    return (a.first>b.first);
}
int main()
{
    ll n,i,x,ans,mx,mn;
    cin>>n;
    map<ll,ll>m;
     map<ll,ll>:: iterator it;
    for(i=0;i<n;i++){
        cin>>x;
        m[x]++;
    }
    vector< pair<ll,ll> >v;
    for(it=m.begin();it!=m.end();it++){
        ///cout<<it->first<<" "<<it->second<<endl;
        v.push_back(make_pair(it->second,it->first));
    }
    sort(v.begin(),v.end(),cmp);
    /*for(i=0;i<v.size();i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    mx=mn=v[0].second;
    ans=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i].second>mx)
        {
            mx=v[i].second;
        }
        if(v[i].second<mn)
        {
            mn=v[i].second;
        }
        ans=ans+(v[i].first*(mx-mn));
    }
    cout<<ans<<endl;
    return 0;
}
