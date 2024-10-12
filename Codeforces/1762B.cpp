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
        vector<pair<ll,ll>>v;
        ll ans[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            v.push_back({a[i],i});
            ans[i]=0;
        }
        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
           ll fi=v[i].first;
           ll fin=v[i+1].first;
           ll d;
           if(fin%fi==0)
           {
               d=fin/fi;
           }
           else
           {
               d=(fin/fi)+1;
           }
           ll p=d*fi;
           ans[v[i+1].second]=p-fin;
           v[i+1].first=p;
        }
        ll c=0;
        for(i=0;i<n;i++)
        {
            if(ans[i])
            {
                c++;
            }
        }
        cout<<c<<endl;
        for(i=0;i<n;i++)
        {
            if(ans[i])
            {
                cout<<i+1<<" "<<ans[i]<<endl;
            }
        }
    }
}

