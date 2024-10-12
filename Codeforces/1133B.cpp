#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,i,j,s,a,mn,mx;
    cin>>n>>k;
    map<ll,ll>mp;
    //map<ll,ll>::iterator it;
    while(n--)
    {
        cin>>a;
        mp[a%k]++;
    }
    s=0;
    for(i=1;i<k;i++)
    {
          if(mp[i]!=0&&mp[k-i]!=0)
          {
              mn=min(mp[i],mp[k-i]);
              mp[i]-=mn;
              mp[k-i]-=mn;
              s+=(mn);
          }
    }
    mp[0]=mp[0]-(mp[0]%k);mx=mp[0];

    cout<<2*s+(2*mn)<<endl;
    return 0;
}
