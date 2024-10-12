
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,x,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll ans[n+1],ch[n+1];
        for(i=1;i<=n;i++)
        {
            ans[i]=1;
        }
        for(i=1;i<=n;i++)
        {
            cin>>x;
            ch[x]=i;
        }
        l=n,r=0;
        for(i=1;i<=n;i++)
        {
            l=min(l,ch[i]);
            r=max(r,ch[i]);
            if((r-l+1)==i);
            else{
                ans[i]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}
