#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll n,a,b,c,i,j,k,r;
   cin>>n>>a>>b>>c;
   vector<ll>v;
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=n;j++)
       {
           if((n-(a*i+b*j))<0)continue;
           else if((a*i+b*j)==n)
           {
               v.push_back(i+j);
           }
           else
           {
               if((n-(a*i+b*j))%c==0)
               {
                   k=(n-(a*i+b*j))/c;
                   v.push_back(i+j+k);
               }
           }
       }
   }
   cout<<*max_element(v.begin(),v.end())<<endl;
   return 0;
}

