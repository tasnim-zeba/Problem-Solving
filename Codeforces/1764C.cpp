#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        m=n/2;
        for(i=1;i<n;i++)
        {
            if(a[i]!=a[i+1])
            {
                m=max(m,i*(n-i));
            }
        }
        cout<<m<<endl;
    }
}
