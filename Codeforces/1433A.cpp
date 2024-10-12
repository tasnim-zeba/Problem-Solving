#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll x,r,ans,l,t;
   cin>>t;
   while(t--)
   {
   cin>>x;
    r=x%10;
    ans=0;
    r--;
    while(r--)
    {
        ans=ans+10;
    }
    l=log10(x)+1;
    if(l==4)
    {
        ans=ans+10;
    }
    else if(l==3)
    {
        ans=ans+6;
    }
    else if(l==2)
    {
        ans=ans+3;
    }
    else if(l==1)
    {
        ans=ans+1;
    }
    cout<<ans<<endl;
   }
    return 0;
}
