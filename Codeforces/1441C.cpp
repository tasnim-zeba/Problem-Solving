#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,x,p1;
    cin>>n;
    ll a[n+1];
    a[1]=0;
    p1=0;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        a[i]=a[i-1]+x;
        p1=min(p1,a[i]);
    }
    map<ll,ll>mp;
    for(i=1;i<=n;i++)
    {
        a[i]=a[i]-(p1-1);
        if(a[i]>n||mp[a[i]])
        {
            cout<<-1<<endl;
            return 0;
        }
         mp[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
