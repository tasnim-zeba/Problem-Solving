#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,q,x,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a(n+1);
        vector<ll>c(n+1);
        vector<ll>p(n+1);
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(i=0;i<n;i++)
        {
            c[i]=mp[a[i]];
        }
        vector<vector<ll> >v;
        v.push_back(a);
        int f=0;
        while(p!=c)
        {
            v.push_back(c);
            f++;
            p=c;
            map<ll,ll>mp1;
            for(i=0;i<n;i++)
            {
                mp1[c[i]]++;
            }
            for(i=0;i<n;i++)
            {
                c[i]=mp1[c[i]];
            }
        }
        cin>>q;
        while(q--)
        {
            cin>>x>>k;
            if(k>=f)
            {
                cout<<v[f][x-1]<<endl;
            }
            else
            {
                cout<<v[k][x-1]<<endl;
            }
        }
    }
    return 0;
}
