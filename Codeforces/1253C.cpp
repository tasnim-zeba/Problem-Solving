#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    ll a[n+1],ans[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    for(i=0;i<n;i++)
    {
        if((i-m)>=0)
        {
            ans[i]=ans[i-m]+a[i];
        }
        else
        {
            ans[i]=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
