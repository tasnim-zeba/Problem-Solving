#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,m,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],b[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        cin>>m;
        multiset<ll>ms;
        for(i=1;i<=m;i++){
            cin>>x;
            ms.insert(x);
        }
        int ok=1;
        set<ll>st;
        for(i=1;i<=n;i++)
        {
            if(a[i]<b[i])
            {
                ok=0;
                break;
            }
            while(st.size()&&b[i]>*st.begin())
            {
                st.erase(st.begin());
            }
            if(a[i]==b[i])continue;
            if(st.count(b[i])==0)
            {
                auto it=ms.find(b[i]);
                if(it==ms.end())
                {
                    ok=0;
                    break;
                }
                else
                {
                    ms.erase(it);
                    st.insert(b[i]);
                }
            }
        }
        if(ok)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
