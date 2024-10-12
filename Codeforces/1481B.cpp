#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,mx,c,j,ans,f;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        mx=*max_element(a+1,a+n+1);
        c=0;
        for(i=1;i<=n;i++)
        {
            c=c+abs(mx-a[i]);
        }
        if(k>c)
        {
            cout<<-1<<endl;
        }
        else
        {
            ans=-1;
        for(j=1;j<=k;j++)
        {
            f=0;
            ///ans=-1;
            for(i=1;i<n;i++)
            {
                if(a[i]<a[i+1])
                {
                    ans=i;
                    a[i]++;
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                ans=-1;
            }
        }
        cout<<ans<<endl;
        }

    }
    return 0;
}
