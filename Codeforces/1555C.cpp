#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>m;
        ll a[m+1],b[m+1],poa[m+1],pb[m+1];
        for(i=0; i<m; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }
        poa[m-1]=a[m-1];
        for(i=m-2; i>=0; i--)
        {
            poa[i]=poa[i+1]+a[i];
        }
        pb[0]=b[0];
        for(i=1; i<m; i++)
        {
            pb[i]=pb[i-1]+b[i];
        }
        if(m==1)
        {
            cout<<0<<endl;
        }
        else
        {
            vector<ll>v;
            ll mx=poa[1];
            v.push_back(mx);
            for(i=2; i<m; i++)
            {

                mx=max(poa[i],pb[i-2]);
                v.push_back(mx);
            }
            v.push_back(pb[m-2]);
            ll ans=*min_element(v.begin(),v.end());
            cout<<ans<<endl;
        }

    }
    return 0;
}
