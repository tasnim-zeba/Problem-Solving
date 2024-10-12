#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<ll>v;
        ll mn=*min_element(a,a+n);
        for(i=0;i<n;i++)
        {
            if((a[i]-mn)!=0)
            {
                v.push_back(a[i]-mn);
            }
        }
        if(v.size()==0)
        {
            cout<<-1<<endl;
        }
        else if(v.size()==1)
        {
            cout<<v[0]<<endl;
        }
        else
        {
            ll ans=0;
            for(i=0;i<v.size();i++)
            {
                ans=__gcd(ans,v[i]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
