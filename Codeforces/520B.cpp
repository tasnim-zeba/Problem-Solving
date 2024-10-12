#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,ans;
    cin>>n>>m;
    if(n>m)
    {
        cout<<(n-m)<<endl;
    }
    else
    {
       ans=0;
       while(1)
       {
           if(n==m)
           {
               break;
           }
            if(m%2==0)
            {
               if((m/2)<=n)
                {
               m=m/2;
               ans++;
               ans=ans+(n-m);
               break;
                }
                else
                {
                     m=m/2;
                    ans++;
                }
           }
           else
           {
               m++;
               ans++;
           }
       }
       cout<<ans<<endl;
    }
}
