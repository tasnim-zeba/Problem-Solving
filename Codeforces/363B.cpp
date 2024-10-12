#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k,i,j,f,s,mn,ans;
    cin>>n>>k;
    int a[n+1];
    for(i=1;i<=n;i++)cin>>a[i];
    int p[n+1];
    p[0]=0;
    p[1]=a[1];
    for(i=2;i<=n;i++)
    {
        p[i]=p[i-1]+a[i];
    }
    mn=INT_MAX;
    f=0;
    ans=1;
    for(i=1;i+k-1<=n;i=i+1)
    {
        f=p[i-1];
        s=p[i+k-1];
        if((s-f)<mn)
        {
            mn=s-f;
            ans=i;
        }
    }
    cout<<ans<<endl;
}
