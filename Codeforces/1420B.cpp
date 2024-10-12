#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        while(n--)
        {
            cin>>x;
            x=log2(x);
            mp[x]++;
        }
        j=0;
        for(it=mp.begin();it!=mp.end();it++)
        {
            x=it->second;
            j=j+(x*(x-1))/2;
        }
        cout<<j<<endl;
    }
    return 0;
}
