#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,q,x,y,z,p,e;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        cin>>e;
        while(e--)
        {
            cin>>x>>y;
            z=x*x-4*y;
            if(z<0)
            {
                cout<<0<<" ";
                continue;
            }
            ll o=sqrt(z);
            if(o*o!=z)
            {
                cout<<0<<" ";
                continue;
            }
            p=(x+o)/2;
            q=(x-o)/2;
            if((p+q)!=x||(p-q)!=o)
            {
                cout<<0<<" ";
                continue;
            }
            if(p==q)
            {
                cout<<(mp[p]*(mp[p]-1))/2<<" ";
            }
            else
            {
                cout<<mp[p]*mp[q]<<" ";
            }
        }
        cout<<endl;
    }
}

