#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[300005];
ll sol(ll a[],ll n)
{
    ll c,res,m1,m2,i;
    c=1,res=0;
    for(i=1;i<n;i++)
    {
        if(c>0)
        {
            if((a[i+1]-a[i])<0){
                res=res+a[i];
              c=(a[i+1]-a[i]);
            }
        }
        else{
            if((a[i+1]-a[i])>0){
                res=res-a[i];
              c=(a[i+1]-a[i]);
            }
        }
    }
    if((a[n]-a[n-1])>0)
    {
        res=res+a[n];
    }
    return res;
}
int main()
{
    ll t,n,q,i,ans,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(n==1){
            ans=a[1];
            cout<<ans<<endl;
            while(q--)
            {
            cin>>l>>r;
            swap(a[l],a[r]);
            ans=a[1];
            cout<<ans<<endl;
            }
        }else{
            ans=sol(a,n);
        cout<<ans<<endl;
        while(q--)
        {
            cin>>l>>r;
            swap(a[l],a[r]);
            ans=sol(a,n);
            cout<<ans<<endl;
        }
    }
    }
    return 0;
}
