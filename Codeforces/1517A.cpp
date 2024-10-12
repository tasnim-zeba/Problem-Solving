#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,c,ans,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2050!=0)
        {
            cout<<-1<<endl;
        }
        else{
            c=n/2050;
            ans=0;
            while(c>0)
            {
                r=c%10;
                ans=ans+r;
                c=c/10;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}
