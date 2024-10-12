#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,n,k,b,s,i,j,x;
    cin>>t;
    while(t--)
    {
       cin>>n>>k>>b>>s;
       vector<ll>v;
       if(s>=(k*b)&&s<=(k*b+(k-1)*n))
       {
           v.push_back(k*b);
           for(i=1;i<n;i++)
           {
               v.push_back(0);
           }
           s=s-k*b;
           for(i=n-1;i>=0;i--)
           {
               if(s==0)break;
              if((s-(k-1))>=0)
              {
                  v[i]+=(k-1);
                  s=s-(k-1);
              }
              else
              {
                  v[i]+=s;
                  s=0;
              }
           }
           for(i=0;i<n;i++)
               {
                   cout<<v[i]<<" ";
               }
               cout<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
    }
}

