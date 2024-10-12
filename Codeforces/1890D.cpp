#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,c,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        cin>>x;
        vector<pair<ll,ll>>v;
        ll a[n+1];
        for(i=2;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=2;i<=n;i++)
        {
            ll rhs = i*c - a[i];
            v.push_back({rhs,i});
        }
        sort(v.begin(),v.end());
        int f=1;
        for(i=0;i<v.size();i++)
        {
            ll rhs=v[i].first;
            ll indx=v[i].second;
            if(x>=rhs)
            {
                x=x+a[indx];
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
