#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,d;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1], mx=INT_MIN, mn= INT_MAX;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mn= min(mn, a[i]);
            mx= max(mx, a[i]);
        }
        if(mn==mx)
        {
            cout<<0<<endl;
            continue;
        }
        if(mn==0)
        {
            ll k=log2(mx);
            cout<<k+1<<endl;
            if(k+1>n)continue;
            for(i=0;i<=k;i++)
            {
                cout<<0<<" ";
            }
            cout<<endl;
            continue;
        }
        vector<ll>v;
        ll ans=log2(mx-mn);
        if(ans+1>n)
        {
            cout<<ans+1<<endl;
            continue;
        }
        int f=1;
        while(f)
        {
            d=mx-mn;
            if(d==1)
            {
                f=0;
            }
            if(mn%2==0&&mx%2)
            {
                v.push_back(d+1);
                mn=(mn+d+1)/2;
                mx=(mx+d+1)/2;
            }
            else
            {
                v.push_back(d);
                mn=(mn+d)/2;
                mx=(mx+d)/2;
            }
        }
        cout<<v.size()<<endl;
        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
