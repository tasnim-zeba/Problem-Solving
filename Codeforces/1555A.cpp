#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=n%10;
        ans=(n/10)*25;
        if(n<10)
        {
            if(x<=6)
            {
                ans=15;
            }
            else if(x<=8)
            {
                ans=20;
            }
            else
            {
                ans=25;
            }
        }
        else
        {
             if(x>0)
        {
            if(x==1||x==2)
            {
                ans=ans+5;
            }
            else if(x<5)
            {
                ans=ans+10;
            }
            else if(x<=6)
            {
                ans=ans+15;
            }
            else if(x<=8)
            {
                ans=ans+20;
            }
            else
            {
                ans=ans+25;
            }
        }
        }
        cout<<ans<<endl;
    }
    return 0;
}
