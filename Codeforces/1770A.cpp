#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,s,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n+1],b[m+1];
        s=0;
        multiset<ll>ms;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
            ms.insert(a[i]);
        }
        for(i=0;i<m;i++)
        {
            cin>>b[i];
            j=*ms.begin();
            s=s-j;
            s=s+b[i];
            ms.erase(ms.begin());
            ms.insert(b[i]);
        }
        cout<<s<<endl;
    }
}
