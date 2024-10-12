#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,c1,c2,n,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        c1=c2=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i>0&&i<n-1)
            {
                if(a[i]!=1){
                   c2=1;
                }
            }
        }
        if(c2==0)
        {
            cout<<-1<<endl;
            continue;
        }
        if(n==3&&a[1]%2!=0)
        {
             cout<<-1<<endl;
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(i>0&&i<n-1)
            {
                if(a[i]%2!=0)
                {
                    a[i]++;
                }
            }
        }
        ll ans=0;
        for(i=0;i<n;i++)
        {
            if(i>0&&i<n-1)
            {
                ans=ans+(a[i]/2);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
