#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=1e9+7;
int main()
{
    ll n,m,i,j,ans;
    cin>>n>>m;
    string s[n+1];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ans=1;
    for(j=0;j<m;j++)
    {
        map<char,ll>mp;
            for(i=0;i<n;i++)
            {
                mp[s[i][j]]++;
            }
            ans=((ans%M)*(mp.size()%M))%M;
    }
    cout<<ans<<endl;
}
