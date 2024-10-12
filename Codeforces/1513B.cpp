#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
ll mod=1e9+7;
int main()
{
    ll t,n,i,mn,ans,f,c,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mn=*min_element(a,a+n);
        c=0;
        x=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==mn)
            {
                c++;
            }
            if((mn&a[i])!=mn)
            {
                x=1;
            }
        }
        if(x==1)
        {
            cout<<0<<endl;
        }
        else{
            f=1;
            for(i=1;i<=n-2;i++)
            {
                f=(f*i)%mod;
            }
            ans=(c*(c-1))%mod;
            ans=(ans*f)%mod;
            cout<<ans<<endl;
        }
    }
    return 0;
}
