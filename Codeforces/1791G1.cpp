#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,c,i,j,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>c;
        ll a[n+1];
        vector<ll>v;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            v.push_back(i+a[i]);
        }
        sort(v.begin(),v.end());
        ans=0,j=0;
        for(i=0;i<v.size();i++)
        {
            if((j+v[i])<=c)
            {
                ans++;
                j=j+v[i];
            }
            else
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}
