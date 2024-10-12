#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
     ll t,n,i,ans,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        map<ll,ll>mp;
        mp[0]=1;
        ans=sum=0;
        for(i=0;i<n;i++)
        {
            ll x=s[i]-'0';
            x--;
            sum=sum+x;
            mp[sum]++;
            ans=ans+mp[sum]-1;
        }
        cout<<ans<<endl;
    }
}
