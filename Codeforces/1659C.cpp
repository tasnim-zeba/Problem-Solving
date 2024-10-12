#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,a,b,i,j,ans,prev,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        vector<ll>ar(n+1),p(n+1);
        ar[0]=0;
        p[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            p[i]=p[i-1]+ar[i];
        }
        ans=LLONG_MAX;
        x=0;
        for(i=0;i<=n;i++)
        {
            ans=min(ans,x+ar[i]*(a+b)+((p[n]-p[i])-(n-i)*ar[i])*b);
        }
        cout<<ans<<endl;
    }
}
