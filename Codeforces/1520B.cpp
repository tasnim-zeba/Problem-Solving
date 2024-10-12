#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t,n,x,i,sum,j,s;
   cin>>t;
   while(t--)
   {
       cin>>n>>x;
       ll a[n+1];
       sum=0;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           sum=sum+a[i];
       }
       if(sum==x)
       {
           cout<<"NO"<<endl;
       }
       else
       {
           sort(a,a+n);
           if(a[0]==x)
           {
               swap(a[0],a[1]);
           }
           s=0;
           for(i=0;i<n-1;i++)
           {
               s=s+a[i];
               if(s==x)
               {
                   swap(a[i],a[n-1]);
               }
           }
           cout<<"YES"<<endl;
           for(i=0;i<n;i++)
           {
               cout<<a[i]<<" ";
           }
           cout<<endl;
       }
   }
    return 0;
}
