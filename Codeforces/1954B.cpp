#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    //fio
    ll t,n,k,i,j,m;
    cin>>t;
    while(t--)
    {
       cin>>n;
       ll a[n+1];
       k=0;
       for(i=1;i<=n;i++)
       {
           cin>>a[i];
       }
       for(i=1;i<n;i++)
       {
           if(a[i]!=a[i+1])k=1;
       }
       if(k==0)
       {
           cout<<-1<<endl;
           continue;
       }
       ll y=INT_MAX,x;
       x=1;
       m=a[1];
       for(i=1; i<=n; i++)
       {
           x=0;
           while(a[i]==m)
           {
               i++;
               x++;
               if(i==n+1)break;
           }
           y=min(y,x);
       }
       cout<<y<<endl;
    }
}

