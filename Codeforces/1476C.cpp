#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1],b[n+1],c[n+1];
        for(i=1;i<=n;i++)cin>>c[i];
        for(i=1;i<=n;i++)cin>>a[i];
        for(i=1;i<=n;i++)cin>>b[i];
        ll mx=LLONG_MIN,ans=0;
        for(i=n;i>=2;i--)
        {
            //cout<<ans<<endl;
            if(ans==0){
            ans+=(c[i]-1+2+abs(b[i]-a[i]));
            //cout<<ans<<endl;
            }
            else
            {
                ll ans1=0;
                ans1+=c[i]-1+2+abs(b[i]-a[i]);
                ans+=c[i]-1+2+abs(b[i]-a[i]);
                ans-=2*abs(b[i+1]-a[i+1]);
                ans=max(ans,ans1);
            }
           // cout<<ans<<endl;
            mx=max(mx,ans);
            if(a[i]==b[i])ans=0;
        }
        cout<<mx<<endl;
    }
}
