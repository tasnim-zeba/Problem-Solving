#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,ab,a,b,c,ans,x,y,mn;
    cin>>t;
    while(t--)
    {
        cin>>ab>>a>>b>>c;
        if(ab==0&&a==0&&b==0&&c==0)
        {
            cout<<0<<endl;
            continue;
        }
        if(ab==0)
        {
            cout<<1<<endl;
            continue;
        }
        x=y=ab;
        ans=ab;
        if(a<=b)
        {
            mn=a;
            b=b-a;
            a=0;
        }
        else
        {
            mn=b;
            a=a-b;
            b=0;
        }
        ans=ans+2LL*mn;
        ///cout<<ans<<endl;
        if(x==max(a,b))
        {
            ans=ans+x;
            if(c)
            {
                ans++;
            }
            cout<<ans<<endl;
            continue;
        }
        else if(x<max(a,b))
        {
            ll mx=max(a,b);
            ans=ans+x;
            ans++;
            cout<<ans<<endl;
            continue;
        }
        else
        {
            ans=ans+max(a,b);
            x=x-max(a,b);
            if(c>x)
            {
                ans=ans+(x+1LL);
            }
            else
            {
                ans=ans+c;
            }
            cout<<ans<<endl;
            continue;
        }
    }
}

