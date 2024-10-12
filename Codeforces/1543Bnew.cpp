#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,s,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s=s+a[i];
        }
        m=s%n;
        cout<<m*(n-m)<<endl;
    }
    return 0;
}
