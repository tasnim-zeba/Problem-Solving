#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,i,j,s,l,r,m,ans;
    cin>>n;
    ll a[n+1];
    s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    l=*max_element(a,a+n),r=s;
    ans=r;
    while(l<=r)
    {
        m=l+(r-l)/2;
        if((n*m-s)>=m)
        {
            ans=m;
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    cout<<ans<<endl;
}

