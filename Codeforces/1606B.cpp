#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,i,s,ans;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    ll x=1,ans=0;
    while(1)
    {
        /*if(x>1e18)
        {
            break;
        }*/
        ///ans++;
        if(x*2>n||x>=k)
        {
            if(x>=k)
            {
                ans=ans+(n-x)/k;
                if(((n-x)%k)!=0)
                {
                    ans++;
                }
                break;
            }
            else{
                ans++;
                break;
            }
        }
        else{
            x=x*2;
        ans++;
        }
    }
    cout<<ans<<endl;
    }


    return 0;
}
