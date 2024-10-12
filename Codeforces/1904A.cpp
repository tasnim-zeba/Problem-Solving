#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,a,b,x1,y1,x2,y2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cin>>x1>>y1;
        cin>>x2>>y2;
        set<pair<int,int>>st;
        st.insert({x1+a,y1+b});
        st.insert({x1-a,y1-b});
        st.insert({x1+a,y1-b});
        st.insert({x1-a,y1+b});
        st.insert({x1+b,y1+a});
        st.insert({x1-b,y1-a});
        st.insert({x1+b,y1-a});
        st.insert({x1-b,y1+a});
        ll ans=0;
        for(auto it:st)
        {
            ll x=it.first, y=it.second;
            if(abs(x2-x)==a&&abs(y2-y)==b)ans++;
            else if(abs(x2-x)==b&&abs(y2-y)==a)ans++;
        }
        cout<<ans<<endl;
    }
}
