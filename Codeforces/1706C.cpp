#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,a1,a2,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1],h1[n+5]={0},h2[n+5]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(n%2==0)
        {
            a1=0;
            for(i=1;i<n-2;i=i+2)
            {
                if(a[i]>a[i-1]&&a[i]>a[i+1]);
                else if(a[i]<=a[i-1]||a[i]<=a[i+1])
                {
                    a1+=max((a[i-1]-a[i]),(a[i+1]-a[i]))+1;
                }
                h1[i]=a1;
            }
            a2=0;
            for(i=n-2;i>=2;i=i-2)
            {
                if(a[i]>a[i-1]&&a[i]>a[i+1]);
                else if(a[i]<=a[i-1]||a[i]<=a[i+1])
                {
                    a2+=max((a[i-1]-a[i]),(a[i+1]-a[i]))+1;
                }
                h2[i]=a2;
            }
          ll ans=h2[2];
           for(i=2;i<n;i=i+2)
           {
               ans=min(ans,h1[i-1]+h2[i+2]);
           }
           cout<<ans<<endl;
        }
        else
        {
            a1=0;
            for(i=1;i<n-1;i=i+2)
            {
                if(a[i]>a[i-1]&&a[i]>a[i+1]);
                else if(a[i]<=a[i-1]||a[i]<=a[i+1])
                {
                    a1+=max((a[i-1]-a[i]),(a[i+1]-a[i]))+1;
                }
            }
            cout<<a1<<endl;
        }
    }
}
