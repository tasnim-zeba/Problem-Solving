#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t,i,n,j,x,y,mx,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mn=*min_element(a,a+n);
        mx=*max_element(a,a+n);
        x=y=0;
         for(i=0;i<n;i++)
        {
            if(a[i]==mn)x++;
            else if(a[i]==mx)y++;
        }
        if(x==0||y==0)
        {
            cout<<n*(n-1)<<endl;
        }
        else
        cout<<2*x*y<<endl;
    }
}
