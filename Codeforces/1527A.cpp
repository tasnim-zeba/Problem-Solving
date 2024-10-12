#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,c,s,x,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        s=1,c=1,x=1;
        while(1)
        {
            if(s>=n)
            {
                ans=s-x;
                break;
            }
            /*else if(s>n)
            {
                break;
            }*/
            x=x*2;
            s=s+x;
            c++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
