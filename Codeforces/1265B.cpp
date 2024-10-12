#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans[n+1],ck[n+1];
        for(i=1;i<=n;i++)
        {
            ans[i]=1;
            ck[i]=0;
        }
        vector< pair<ll,ll> >v;
        vector< pair<ll,ll> >:: iterator it;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back({x,i+1});
        }
        sort(v.rbegin(),v.rend());
        /*for(it=v.begin();it!=v.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }*/
        ll ix1=n,ix2=1;
        for(it=v.begin()+1;it!=v.end();it++)
        {

        }
    }
}
