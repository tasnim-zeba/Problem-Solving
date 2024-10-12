#include<bits/stdc++.h>
typedef long long ll;
#define lowbit(x) x&(-x);
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,p,ans;
        cin>>n>>x;
        p=n;
        ans=-1;
        while((n&x)==x)
        {
            if(n==x)
            {
                ans=p;
                break;
            }
            p+=lowbit(p);
            n&=p;
        }
        cout<<ans<<endl;
    }
    return 0;
}
