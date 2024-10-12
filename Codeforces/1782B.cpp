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
        ll a[n+1];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        ll ans=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]<=i-1)
            {
                ans++;
                while(a[i]<=i-1)
                {
                    i++;
                    if(i>n)break;
                }
            }
        }
        if(a[1]!=0)ans++;
        cout<<ans<<endl;
    }
}
