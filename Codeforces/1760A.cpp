#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,i,j,n,f1,f2;
    cin>>t;
    while(t--)
    {
       cin>>n;
       ll a[n+1];
       vector<pair<ll,ll>>b;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           b.push_back({a[i],i});
       }
       sort(b.begin(),b.end());
       f1=b[n-1].second;
       f2=b[n-2].second;
       for(i=0;i<n;i++)
       {
           if(i==f1)
           {
               cout<<a[i]-b[n-2].first<<" ";
           }
           else
           {
               cout<<a[i]-b[n-1].first<<" ";
           }
       }
       cout<<endl;
    }
}
