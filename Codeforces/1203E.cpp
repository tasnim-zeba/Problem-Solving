#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,pr,ne,ans;
    cin>>n;
    ll a[n+1];
    map<ll,ll>mp;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    pr=0;
    ans=0;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        ll x=it->first;
        ll y=it->second;
        if(y>=1&&(x-1)>pr)
        {
            ans=ans+1;
            y=y-1;
            pr=x-1;
        }
        if(y>=1&&x>pr)
        {
            ans=ans+1;
            y=y-1;
            pr=x;
        }
        /*auto it1=it;it1++;
        if(it1==mp.end())
        {
            ne=150002;
        }
        else
        {
            ne=it1->first;
        }*/
        if(y>0&&(x+1)<=150001)
        {
            y--;
            ans++;
            pr=x+1;
        }
    }
    cout<<ans<<endl;
}
