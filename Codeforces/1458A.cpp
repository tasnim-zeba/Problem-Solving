#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,ans,c;
   cin>>n>>m;
   long long a[n+1],b[m+1];
   for(i=1;i<=n;i++){
    cin>>a[i];
   }
   for(i=1;i<=m;i++){
    cin>>b[i];
   }
   sort(a+1,a+n+1);
   ans=0;
   for(i=2;i<=n;i++){
    ans=__gcd(ans,(a[i]-a[1]));
   }
   for(i=1;i<=m;i++){
    c=a[1]+b[i];
    long long v=__gcd(ans,c);
    cout<<v<<" ";
   }
   return 0;
}
