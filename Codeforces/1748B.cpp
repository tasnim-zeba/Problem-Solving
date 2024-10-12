#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        ans=0;
        for(i=0;i<n;i++)
        {
            m=i+100;
            m=min(n,m);
            map<char,ll>mp;
            ll mx=INT_MIN;
            for(j=i;j<m;j++)
            {
                mp[s[j]]++;
                mx=max(mx,mp[s[j]]);
                if(mp.size()>=mx)
                {
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}
