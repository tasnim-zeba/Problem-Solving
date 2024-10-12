#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,ans,k;
    cin>>n;
    ll a[n+1],pre[n+1],suf[n+1];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    pre[0]=~a[0];
    for(i=1; i<n; i++)
    {
        pre[i]=pre[i-1]&(~a[i]);
    }
    suf[n-1]=~a[n-1];
    for(i=n-2; i>=0; i--)
    {
        suf[i]=suf[i+1]&(~a[i]);
    }
    ans=INT_MIN;
    if((a[0]&suf[1])>ans)
    {
        ans=a[0]&suf[1];
        k=0;
    }
    if((a[n-1]&pre[n-2])>ans)
    {
        ans=a[n-1]&pre[n-2];
        k=n-1;
    }
   /// cout<<ans<<endl;
    for(i=1; i<n-1; i++)
    {
        if((a[i]&pre[i-1]&suf[i+1])>ans)
        {
            ans=a[i]&pre[i-1]&suf[i+1];
            k=i;
        }
      //  cout<<ans<<endl;
    }
    swap(a[0],a[k]);
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
