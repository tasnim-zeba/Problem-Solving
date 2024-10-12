#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll b[n+1],p1[n+1],p2[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
        }
        p1[1]=b[1]+1,p2[n]=b[n]-n;
        for(i=2;i<=n;i++)
        {
            p1[i]=max(p1[i-1],b[i]+i);
        }
        for(i=n-1;i>=1;i--)
        {
            p2[i]=max(p2[i+1],b[i]-i);
        }
       ll ans=INT_MIN;
        for(i=2;i<n;i++)
        {
            ans=max(p1[i-1]+b[i]+p2[i+1],ans);
        }
        cout<<ans<<endl;
    }
}
