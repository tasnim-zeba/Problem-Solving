#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin.exceptions(ios::badbit | ios::failbit);
    ll t,n,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        c=1;
        vector<ll>v;
        if(n%2!=0)
        {
            v.push_back(a[0]);
            for(i=1;i<n;i=i+2)
            {
                if((i+1)>=n)continue;
                ll mn,mx;
                mn=min(a[i],a[i+1]);
                mx=max(a[i],a[i+1]);
                v.push_back(mn);
                v.push_back(mx);
            }
        }
        else
        {
            for(i=0;i<n;i=i+2)
            {
                if((i+1)>=n)continue;
                ll mn,mx;
                mn=min(a[i],a[i+1]);
                mx=max(a[i],a[i+1]);
                v.push_back(mn);
                v.push_back(mx);
            }
        }
        for(i=0;i<v.size()-1;i++)
        {
            if(v[i+1]<v[i])
            {
                c=0;
                break;
            }
        }
        if(c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
