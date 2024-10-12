#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fio
    ll t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unordered_map<ll,ll>mp;
        set<ll>st;
        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            mp[x]++;
            st.insert(x);
        }
        long long ans=0;
        for(auto it:st)
        {
            for(i=2;i*i<=it;i++)
            {
                if(it%(i*i)==0)
                {
                    ll a,b,c;
                    a=it;
                    b=a/i;
                    c=b/i;
                    ans=ans+mp[a]*mp[b]*mp[c];
                }
            }
            if(mp[it]>=3)
            {
                ans=ans+mp[it]*(mp[it]-1)*(mp[it]-2);
            }
        }
        cout<<ans<<endl;
    }
}
