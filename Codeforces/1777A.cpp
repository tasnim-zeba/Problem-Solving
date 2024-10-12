#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,i,j,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        ll ans=0;
        for(i=0;i<n;)
        {
            if(a[i]%2==0)
            {
                c=0;
                while(a[i]%2==0)
                {
                    c++;
                    i++;
                    if(i==n)break;
                }
                ans=ans+(c-1);
            }
            else
            {
                c=0;
                while(a[i]%2==1)
                {
                    c++;
                    i++;
                    if(i==n)break;
                }
                ans=ans+(c-1);
            }
        }
        cout<<ans<<endl;
    }
}
