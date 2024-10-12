#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,s,x;
    cin>>n;
    ll a[n+1][2];
    memset(a,0,sizeof(a));
    for(i=1;i<=2*n;i++)
    {
        cin>>x;
        if(a[x][0]==0)
        {
            a[x][0]=i;
        }
        else
        {
            a[x][1]=i;
        }
    }
   s=0;
   a[0][0]=a[0][1]=1;
   for(i=1;i<=n;i++)
   {
       s=s+abs(a[i][0]-a[i-1][0])+abs(a[i][1]-a[i-1][1]);
   }
   cout<<s<<endl;
    return 0;
}
