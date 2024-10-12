#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,ans,x,m,c,n1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ans=0;
        n1=0;
        for(i=n-1;i>=0;i--)
        {
            n1++;
            if(i==0)
            {
                break;
            }
            else if(a[i-1]!=a[n-1])
            {
                ans++;
                i=i-(n1-1);
                n1=n1+(n1-1);
                if(i<=0)
                {
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
}

