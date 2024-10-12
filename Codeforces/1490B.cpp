#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[30005];
int main()
{
    ll n,i,x,t,c0,c1,c2,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c0=c1=c2=0;
        for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%3==0)
        {
            c0++;
        }
        else if(a[i]%3==1)
        {
            c1++;
        }
        else if(a[i]%3==2)
        {
            c2++;
        }
        }
        m=n/3;
        ans=0;
        if(c0<m)
        {
            if(c2>m)
            {
                 ans=ans+min((m-c0),(c2-m));
                c0=c0+min((m-c0),(c2-m));
                c2=c2-min((m-c0),(c2-m));
            }
            if(c0<m)
            {
                ans=ans+2*(m-c0);
                c0=c0+(m-c0);
                c1=c1-(m-c0);
            }
        }
        if(c1<m)
        {
            if(c0>m)
            {
                ans=ans+min((m-c1),(c0-m));
                c1=c1+min((m-c1),(c0-m));
                c0=c0-min((m-c1),(c0-m));
            }
            if(c1<m)
            {
                ans=ans+2*(m-c1);
                c1=c1+(m-c1);
                c2=c2-(m-c1);
            }
        }
        if(c2<m)
        {
            if(c1>m)
            {
                ans=ans+min((m-c2),(c1-m));
                c2=c2+min((m-c2),(c1-m));
                c1=c1-min((m-c2),(c1-m));
            }
            if(c2<m)
            {
                  ans=ans+2*(m-c2);
                c2=c2+(m-c2);
                c0=c0-(m-c2);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

