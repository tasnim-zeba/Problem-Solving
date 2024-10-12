#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,l,ans,x,d,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        l=log10(n);
        ans=l*9;
        m=pow(10,l);
         d=(n/m);
        ans=ans+(d-1);
         x=d;
        while(l--)
        {
            x=x*10;
            x=x+d;
        }
          ///cout<<x<<" "<<d<<endl;
          if(n>=x)
          {
              cout<<ans+1<<endl;
          }
          else
          {
              cout<<ans<<endl;
          }
    }
    return 0;
}
