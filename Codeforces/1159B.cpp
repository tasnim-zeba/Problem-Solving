#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,ans,x,y;
    cin>>n;
    ll a[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ans=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            x=(min(a[i],a[n-1])/(n-1-i));
        }
        else if(i==(n-1))
        {
            x=(min(a[i],a[0])/(n-1));
        }
        else
        {
             x=min((min(a[i],a[0])/(i)),(min(a[i],a[n-1])/(n-1-i)));
        }
        ans=min(ans,x);
    }
    cout<<ans<<endl;
}
