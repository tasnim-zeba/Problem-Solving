#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        vector<ll>v(n+1,-1);
        set<ll>st;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            st.insert(i);
        }
        mx=a[1];
        for(i=2;i<=n;i++)
        {
            if(a[i]>mx)
            {
                mx=a[i];
            }
            else
            {
                auto it=st.lower_bound(mx-a[i]);
                v[(*it)]=i;
                st.erase(it);
            }
        }
        for(i=1;i<=n;i++)
        {
            if(v[i]!=-1)cout<<v[i]<<" ";
            else cout<<1<<" ";
        }
        cout<<endl;
    }
}
