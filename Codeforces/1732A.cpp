#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
         int g=a[0];
         for(i=0;i<n;i++)
         {
             g=__gcd(g,a[i]);
         }
         if(g==1)
         {
             cout<<0<<endl;
         }
         else  if(__gcd(g,n)==1)
         {
                cout<<1<<endl;
         }
         else if(__gcd(g,n-1)==1)
         {
             cout<<2<<endl;
         }
         else
         {
             cout<<3<<endl;
         }
    }
}
