#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,s,i,j,r,ans,sd;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        int a[21]={0};
        i=0;
        sd=0;
        while(n)
        {
            r=n%10;
            sd+=r;
            a[i]=r;
            i++;
            n=n/10;
        }
        if(sd<=s)
        {
            cout<<0<<endl;
            continue;
        }
        ans=0;
        for(i=0;i<20;i++)
        {
            ///cout<<a[i]<<" ";
            if(a[i]==0)continue;
            ll dif=10-a[i];
            ll g=1;
            for(j=1;j<=i;j++)
            {
                g=g*10;
            }
            ans=ans+dif*g;
            if(a[i+1]==9)
            {
                sd=sd-a[i]-9+1;
                a[i+1]=0;
                a[i+2]++;
            }
            else
            {
                sd=sd-a[i]+1;
                a[i+1]++;
            }
            ///cout<<ans<<endl;
            if(sd<=s)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}
