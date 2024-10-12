#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    map<ll,int>mp;
    mp[0]=0;
    ll sm=0, ans =0;
    int mx=0;
    for(i=1; i<=n; i++)
    {
        sm += a[i];
        if(mp.find(sm)!=mp.end())
        {
            mx = max(mx, mp[sm]+1);
        }
        mp[sm]=i;
        //cout<<i-mx<<endl;
        ans+=i-mx;
    }
    cout<<ans<<endl;
}
